/******************************************************************
*
* uSQL for C++
*
* Copyright (C) Satoshi Konno 2012
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#include <cybergarage/sql/node/SQLSet.h>

std::string &uSQL::SQLSet::toString(std::string &buf) 
{
    std::ostringstream oss;
    std::string childNodeStr;
    oss << "SET " << childNodesToString(childNodeStr, ",");
    buf = oss.str();
    return buf;
}
