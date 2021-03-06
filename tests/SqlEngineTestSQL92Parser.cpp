/******************************************************************
*
* uSQL for C++
*
* SQLEngineTestGQLParser.cpp
*
* Copyright (C) Satoshi Konno 2011
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#include <string>
#include <vector>

#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

#include <usql/SQL92Parser.h>

#include "SqlEngineTestCase.h"

using namespace std;
using namespace uSQL;

BOOST_AUTO_TEST_CASE(SQLParser92Test)
{
  vector<string> sqlStrings;

  sqlStrings.push_back("SELECT * FROM SAMPLE1");
  sqlStrings.push_back("SELECT * FROM SAMPLE2 WHERE A = B");
  sqlStrings.push_back("SELECT * FROM SAMPLE3 LIMIT 10");

  sqlStrings.push_back("INSERT INTO abc VALUES (1234)");
  sqlStrings.push_back("INSERT INTO abc (age) VALUES (34)");
  sqlStrings.push_back("INSERT INTO abc (name,age) VALUES (skonno,34)");
  
  sqlStrings.push_back("DELETE FROM abc");
  sqlStrings.push_back("DELETE FROM abc WHERE A = B");
  
  sqlStrings.push_back("UPDATE abc SET age = 34");
  sqlStrings.push_back("UPDATE abc SET age = 34 WHERE name = skonno");
  
  SQL92Parser sqlParser;
  SqlEngineTestCase sqlTestCase(&sqlParser);
  sqlTestCase.parse(sqlStrings);
}
