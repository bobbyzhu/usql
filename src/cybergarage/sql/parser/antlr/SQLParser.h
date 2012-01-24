/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : SQL.g
 *     -                            On : 2012-01-24 14:58:37
 *     -                for the parser : SQLParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser 
SQLParser

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pSQLParser, which is returned from a call to SQLParserNew().
 *
 * The methods in pSQLParser are  as follows:
 *
 *  - 
 void
      pSQLParser->statement_list(pSQLParser)
 *  - 
 void
      pSQLParser->statement(pSQLParser)
 *  - 
 void
      pSQLParser->select_stmt(pSQLParser)
 *  - 
 void
      pSQLParser->select_core(pSQLParser)
 *  - 
 uSQL::SQLColumn *
      pSQLParser->result_column_section(pSQLParser)
 *  - 
 uSQL::SQLFrom *
      pSQLParser->from_section(pSQLParser)
 *  - 
 void
      pSQLParser->table_name(pSQLParser)
 *  - 
 uSQL::SQLDataSource *
      pSQLParser->data_source(pSQLParser)
 *  - 
 uSQL::SQLGroupBy *
      pSQLParser->grouping_section(pSQLParser)
 *  - 
 uSQL::SQLHaving *
      pSQLParser->having_section(pSQLParser)
 *  - 
 uSQL::SQLOrderBy *
      pSQLParser->sorting_section(pSQLParser)
 *  - 
 void
      pSQLParser->sorting_item(pSQLParser)
 *  - 
 SQLParser_sorting_specification_return
      pSQLParser->sorting_specification(pSQLParser)
 *  - 
 uSQL::SQLLimit *
      pSQLParser->limit_section(pSQLParser)
 *  - 
 uSQL::SQLOffset *
      pSQLParser->offset_section(pSQLParser)
 *  - 
 void
      pSQLParser->create_collection_stmt(pSQLParser)
 *  - 
 void
      pSQLParser->drop_collection_stmt(pSQLParser)
 *  - 
 void
      pSQLParser->create_index_stmt(pSQLParser)
 *  - 
 void
      pSQLParser->drop_index_stmt(pSQLParser)
 *  - 
 void
      pSQLParser->insert_stmt(pSQLParser)
 *  - 
 uSQL::SQLColumn *
      pSQLParser->insert_column_section(pSQLParser)
 *  - 
 void
      pSQLParser->update_stmt(pSQLParser)
 *  - 
 void
      pSQLParser->property_section(pSQLParser)
 *  - 
 void
      pSQLParser->delete_stmt(pSQLParser)
 *  - 
 void
      pSQLParser->expression(pSQLParser)
 *  - 
 void
      pSQLParser->expression_list(pSQLParser)
 *  - 
 uSQL::SQLExpression *
      pSQLParser->expression_literal(pSQLParser)
 *  - 
 void
      pSQLParser->expression_literal_value(pSQLParser)
 *  - 
 void
      pSQLParser->expression_dictionary(pSQLParser)
 *  - 
 void
      pSQLParser->dictionary_literal(pSQLParser)
 *  - 
 void
      pSQLParser->expression_array(pSQLParser)
 *  - 
 void
      pSQLParser->array_literal(pSQLParser)
 *  - 
 void
      pSQLParser->expression_logic_operator(pSQLParser)
 *  - 
 void
      pSQLParser->expression_binary_operator(pSQLParser)
 *  - 
 uSQL::SQLFunction *
      pSQLParser->expression_function(pSQLParser)
 *  - 
 uSQL::SQLFunction *
      pSQLParser->function_name(pSQLParser)
 *  - 
 void
      pSQLParser->function_value(pSQLParser)
 *  - 
 uSQL::SQLOperator *
      pSQLParser->expression_operator(pSQLParser)
 *  - 
 uSQL::SQLOperator *
      pSQLParser->binary_operator(pSQLParser)
 *  - 
 uSQL::SQLOperator *
      pSQLParser->logical_operator(pSQLParser)
 *  - 
 SQLParser_property_literal_return
      pSQLParser->property_literal(pSQLParser)
 *  - 
 SQLParser_integer_literal_return
      pSQLParser->integer_literal(pSQLParser)
 *  - 
 SQLParser_real_literal_return
      pSQLParser->real_literal(pSQLParser)
 *  - 
 SQLParser_string_literal_return
      pSQLParser->string_literal(pSQLParser)
 *  - 
 SQLParser_true_literal_return
      pSQLParser->true_literal(pSQLParser)
 *  - 
 SQLParser_false_literal_return
      pSQLParser->false_literal(pSQLParser)
 *  - 
 bool
      pSQLParser->sync_operator(pSQLParser)
 *  - 
 void
      pSQLParser->compound_operator(pSQLParser)
 *  - 
 void
      pSQLParser->condition_operator(pSQLParser)
 *  - 
 SQLParser_property_return
      pSQLParser->property(pSQLParser)
 *  - 
 void
      pSQLParser->value(pSQLParser)
 *  - 
 SQLParser_name_return
      pSQLParser->name(pSQLParser)
 *  - 
 uSQL::SQLCollection *
      pSQLParser->collection_section(pSQLParser)
 *  - 
 SQLParser_collection_name_return
      pSQLParser->collection_name(pSQLParser)
 *  - 
 void
      pSQLParser->column_section(pSQLParser)
 *  - 
 uSQL::SQLIndex *
      pSQLParser->index_section(pSQLParser)
 *  - 
 SQLParser_index_name_return
      pSQLParser->index_name(pSQLParser)
 *  - 
 uSQL::SQLWhere *
      pSQLParser->where_section(pSQLParser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_SQLParser_H
#define _SQLParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

	#include <cybergarage/sql/SQLParser.h>
    
	#define CG_ANTLR3_STRING_2_UTF8(str) ((const char *)str->chars)
	#define CG_ANTLR3_STRING_2_INT(str) (str->chars ? atoi((const char *)str->chars) : 0)
	inline void CG_ANTLR3_SQLNODE_ADDNODES(uSQL::SQLNode *parentNode, uSQL::SQLNodeList *sqlNodes) {
		for (uSQL::SQLNodeList::iterator node = sqlNodes->begin(); node != sqlNodes->end(); node++)
			parentNode->addChildNode(*node);
	}


#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct SQLParser_Ctx_struct SQLParser, * pSQLParser;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif
typedef struct SQLParser_sorting_specification_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    SQLParser_sorting_specification_return;



typedef struct SQLParser_property_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    SQLParser_property_literal_return;



typedef struct SQLParser_integer_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    SQLParser_integer_literal_return;



typedef struct SQLParser_real_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    SQLParser_real_literal_return;



typedef struct SQLParser_string_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    SQLParser_string_literal_return;



typedef struct SQLParser_true_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    SQLParser_true_literal_return;



typedef struct SQLParser_false_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    SQLParser_false_literal_return;



typedef struct SQLParser_property_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    SQLParser_property_return;



typedef struct SQLParser_name_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    SQLParser_name_return;



typedef struct SQLParser_collection_name_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    SQLParser_collection_name_return;



typedef struct SQLParser_index_name_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    SQLParser_index_name_return;





/** Context tracking structure for 
SQLParser

 */
struct SQLParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;

     void
     (*statement_list)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLParser *sqlParser);

     void
     (*statement)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLParser *sqlParser);

     void
     (*select_stmt)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     void
     (*select_core)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     uSQL::SQLColumn *
     (*result_column_section)	(struct SQLParser_Ctx_struct * ctx);

     uSQL::SQLFrom *
     (*from_section)	(struct SQLParser_Ctx_struct * ctx);

     void
     (*table_name)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLFrom *sqlFrom);

     uSQL::SQLDataSource *
     (*data_source)	(struct SQLParser_Ctx_struct * ctx);

     uSQL::SQLGroupBy *
     (*grouping_section)	(struct SQLParser_Ctx_struct * ctx);

     uSQL::SQLHaving *
     (*having_section)	(struct SQLParser_Ctx_struct * ctx);

     uSQL::SQLOrderBy *
     (*sorting_section)	(struct SQLParser_Ctx_struct * ctx);

     void
     (*sorting_item)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLOrderBy *sqlOrders);

     SQLParser_sorting_specification_return
     (*sorting_specification)	(struct SQLParser_Ctx_struct * ctx);

     uSQL::SQLLimit *
     (*limit_section)	(struct SQLParser_Ctx_struct * ctx);

     uSQL::SQLOffset *
     (*offset_section)	(struct SQLParser_Ctx_struct * ctx);

     void
     (*create_collection_stmt)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     void
     (*drop_collection_stmt)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     void
     (*create_index_stmt)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     void
     (*drop_index_stmt)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     void
     (*insert_stmt)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     uSQL::SQLColumn *
     (*insert_column_section)	(struct SQLParser_Ctx_struct * ctx);

     void
     (*update_stmt)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     void
     (*property_section)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLSet *sqlSet);

     void
     (*delete_stmt)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     void
     (*expression)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLNode *parentNode);

     void
     (*expression_list)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLNodeList &sqlNodeList);

     uSQL::SQLExpression *
     (*expression_literal)	(struct SQLParser_Ctx_struct * ctx);

     void
     (*expression_literal_value)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLExpression *sqlExpr);

     void
     (*expression_dictionary)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLNodeList &sqlNodeList);

     void
     (*dictionary_literal)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLExpression *parentSqlExpr);

     void
     (*expression_array)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLNodeList &sqlNodeList);

     void
     (*array_literal)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLExpression *parentSqlExpr);

     void
     (*expression_logic_operator)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLNodeList &sqlNodeList);

     void
     (*expression_binary_operator)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLNodeList &sqlNodeList);

     uSQL::SQLFunction *
     (*expression_function)	(struct SQLParser_Ctx_struct * ctx);

     uSQL::SQLFunction *
     (*function_name)	(struct SQLParser_Ctx_struct * ctx);

     void
     (*function_value)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLFunction *sqlFunc);

     uSQL::SQLOperator *
     (*expression_operator)	(struct SQLParser_Ctx_struct * ctx);

     uSQL::SQLOperator *
     (*binary_operator)	(struct SQLParser_Ctx_struct * ctx);

     uSQL::SQLOperator *
     (*logical_operator)	(struct SQLParser_Ctx_struct * ctx);

     SQLParser_property_literal_return
     (*property_literal)	(struct SQLParser_Ctx_struct * ctx);

     SQLParser_integer_literal_return
     (*integer_literal)	(struct SQLParser_Ctx_struct * ctx);

     SQLParser_real_literal_return
     (*real_literal)	(struct SQLParser_Ctx_struct * ctx);

     SQLParser_string_literal_return
     (*string_literal)	(struct SQLParser_Ctx_struct * ctx);

     SQLParser_true_literal_return
     (*true_literal)	(struct SQLParser_Ctx_struct * ctx);

     SQLParser_false_literal_return
     (*false_literal)	(struct SQLParser_Ctx_struct * ctx);

     bool
     (*sync_operator)	(struct SQLParser_Ctx_struct * ctx);

     void
     (*compound_operator)	(struct SQLParser_Ctx_struct * ctx);

     void
     (*condition_operator)	(struct SQLParser_Ctx_struct * ctx);

     SQLParser_property_return
     (*property)	(struct SQLParser_Ctx_struct * ctx);

     void
     (*value)	(struct SQLParser_Ctx_struct * ctx);

     SQLParser_name_return
     (*name)	(struct SQLParser_Ctx_struct * ctx);

     uSQL::SQLCollection *
     (*collection_section)	(struct SQLParser_Ctx_struct * ctx);

     SQLParser_collection_name_return
     (*collection_name)	(struct SQLParser_Ctx_struct * ctx);

     void
     (*column_section)	(struct SQLParser_Ctx_struct * ctx, uSQL::SQLColumn *sqlColumn);

     uSQL::SQLIndex *
     (*index_section)	(struct SQLParser_Ctx_struct * ctx);

     SQLParser_index_name_return
     (*index_name)	(struct SQLParser_Ctx_struct * ctx);

     uSQL::SQLWhere *
     (*where_section)	(struct SQLParser_Ctx_struct * ctx);
    // Delegated rules

    const char * (*getGrammarFileName)();
    void            (*reset)  (struct SQLParser_Ctx_struct * ctx);
    void	    (*free)   (struct SQLParser_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pSQLParser SQLParserNew         (
pANTLR3_COMMON_TOKEN_STREAM
 instream);
ANTLR3_API pSQLParser SQLParserNewSSD      (
pANTLR3_COMMON_TOKEN_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
parser
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define T__93      93
#define T__94      94
#define T__95      95
#define T__96      96
#define T__97      97
#define T__98      98
#define T__99      99
#define A      4
#define ALL      5
#define ANCESTOR      6
#define AND      7
#define AS      8
#define ASC      9
#define ASTERISK      10
#define ASYNC      11
#define B      12
#define BY      13
#define C      14
#define CHAR      15
#define COLLECTION      16
#define COLLECTION_INDEX      17
#define COMMA      18
#define CREATE      19
#define CURRENT_DATE      20
#define CURRENT_TIME      21
#define CURRENT_TIMESTAMP      22
#define D      23
#define DELETE      24
#define DESC      25
#define DISTINCT      26
#define DOUBLE_EQ      27
#define DROP      28
#define E      29
#define EACH      30
#define ESC_SEQ      31
#define EXCEPT      32
#define EXPONENT      33
#define EscapeSequence      34
#define F      35
#define FLATTEN      36
#define FLOAT      37
#define FROM      38
#define G      39
#define GE      40
#define GROUP      41
#define GT      42
#define H      43
#define HAVING      44
#define HEX_DIGIT      45
#define I      46
#define ID      47
#define IN      48
#define INSERT      49
#define INTERSECT      50
#define INTO      51
#define IS      52
#define J      53
#define K      54
#define L      55
#define LE      56
#define LIMIT      57
#define M      58
#define N      59
#define NIL      60
#define NOTEQ      61
#define NUMBER      62
#define O      63
#define OCTAL_ESC      64
#define OFFSET      65
#define OPTIONS      66
#define OP_LT      67
#define OR      68
#define ORDER      69
#define P      70
#define Q      71
#define R      72
#define S      73
#define SELECT      74
#define SEMICOLON      75
#define SET      76
#define SINGLE_EQ      77
#define STRING      78
#define SYNC      79
#define T      80
#define U      81
#define UNICODE_ESC      82
#define UNION      83
#define UPDATE      84
#define V      85
#define VALUE      86
#define W      87
#define WHERE      88
#define WS      89
#define X      90
#define Y      91
#define Z      92
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for SQLParser
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
