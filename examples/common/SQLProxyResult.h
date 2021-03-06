/******************************************************************
*
* uSQL for C++
*
* Copyright (C) Satoshi Konno 2012
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#ifndef CG_USQL_SQLPROXYRESULT_H
#define CG_USQL_SQLPROXYRESULT_H

#include <usql/SQLError.h>
#include "SQLProxyDataSet.h"

namespace uSQL {

class SQLProxyResult : public SQLError {
  
private:
  
  SQLProxyDataSet resultSet;
  std::string execMessage;
  bool cached;
  
public:

  SQLProxyResult();
  virtual ~SQLProxyResult();

  void setExecMessage(const std::string &message) {
    this->execMessage = message;
  }
  
  const std::string &getExecMessage() {
    return execMessage;
  }

  void setCashed(bool flag) {
    this->cached = flag;
  }
  
  bool isCashed() {
    return this->cached;
  }
  
  SQLProxyDataSet *getResultSet() {
    return &resultSet;
  }
  
  bool hasMessage() {
    return (0 < execMessage.length());
  }
  
  void setErrorMessage(const std::string &message) {
    setMessage(message);
  }
  
  const std::string &getErrorMessage() {
    return getMessage();
  }
  
  void clear();
};

}

#endif
