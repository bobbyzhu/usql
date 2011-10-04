/******************************************************************
*
* uSQL for C++
*
* SQLNode.h
*
* Copyright (C) Satoshi Konno 2011
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#ifndef CG_USQL_SQLNODE_H
#define CG_USQL_SQLNODE_H

#include <vector>
#include <iostream>

namespace uSQL {

class SQLNode;

class SQLNodeList : public std::vector<SQLNode *> {

public:

	SQLNodeList()
    {
    }

    void addNode(SQLNode *node) {
    	push_back(node);
    }

    SQLNode *getNode(int index) {
    	return at(index);
    }
};

class SQLNode {

public:

    static const int CONDITION;
    static const int COMMAND;
    static const int FROM;
    static const int TABLE;
    static const int LIMIT;
    static const int OFFSET;
    static const int ORDER;
    static const int ORDERS;
    static const int ROW;
    static const int ROWS;
    static const int WHERE;
    
private:
    
    int type;

	SQLNode *parent;
	SQLNodeList children;

public:

	SQLNode();

    void setType(int type) {
        this->type = type;
    }
    
    int getType() {
        return this->type;
    }

    void setParentNode(SQLNode *node) {
        this->parent = node;
    }
    
    SQLNode *getParentNode() {
        return this->parent;
    }

    void addChildNode(SQLNode *node) {
        node->setParentNode(this);
    	children.addNode(node);
    }
	    
    void addChildNodes(SQLNodeList *nodeList) {
		for (SQLNodeList::iterator node = nodeList->begin(); node != nodeList->end(); node++)
        	addChildNode(*node);
    }
    
    int numChildNodes()
    {
    	return (int)children.size();
    }

    SQLNode *getChildNode(int index)
    {
    	return children.getNode(index);
    }
    
    virtual std::string &toString(std::string &buf) = 0;
};

}

#endif
