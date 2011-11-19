/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : UnQL.g
 *     -                            On : 2011-11-19 18:25:18
 *     -                for the parser : UnQLParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser 
UnQLParser

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
 * a parser context typedef pUnQLParser, which is returned from a call to UnQLParserNew().
 *
 * The methods in pUnQLParser are  as follows:
 *
 *  - 
 void
      pUnQLParser->statement(pUnQLParser)
 *  - 
 void
      pUnQLParser->select_stmt(pUnQLParser)
 *  - 
 void
      pUnQLParser->select_core(pUnQLParser)
 *  - 
 void
      pUnQLParser->create_collection_stmt(pUnQLParser)
 *  - 
 void
      pUnQLParser->drop_collection_stmt(pUnQLParser)
 *  - 
 void
      pUnQLParser->insert_stmt(pUnQLParser)
 *  - 
 bool
      pUnQLParser->sync_operator(pUnQLParser)
 *  - 
 void
      pUnQLParser->compound_operator(pUnQLParser)
 *  - 
 void
      pUnQLParser->table_name(pUnQLParser)
 *  - 
 uSQL::SQLFrom *
      pUnQLParser->table_list(pUnQLParser)
 *  - 
 uSQL::SQLWhere *
      pUnQLParser->where_section(pUnQLParser)
 *  - 
 void
      pUnQLParser->condition_list(pUnQLParser)
 *  - 
 void
      pUnQLParser->condition(pUnQLParser)
 *  - 
 UnQLParser_condition_operator_return
      pUnQLParser->condition_operator(pUnQLParser)
 *  - 
 uSQL::SQLOrders *
      pUnQLParser->sort_section(pUnQLParser)
 *  - 
 void
      pUnQLParser->sort_specification_list(pUnQLParser)
 *  - 
 void
      pUnQLParser->sort_specification(pUnQLParser)
 *  - 
 UnQLParser_ordering_specification_return
      pUnQLParser->ordering_specification(pUnQLParser)
 *  - 
 uSQL::SQLLimit *
      pUnQLParser->limit_section(pUnQLParser)
 *  - 
 void
      pUnQLParser->limit_offset(pUnQLParser)
 *  - 
 uSQL::SQLOffset *
      pUnQLParser->offset_section(pUnQLParser)
 *  - 
 UnQLParser_value_return
      pUnQLParser->value(pUnQLParser)
 *  - 
 void
      pUnQLParser->name(pUnQLParser)
 *  - 
 UnQLParser_collection_name_return
      pUnQLParser->collection_name(pUnQLParser)
 *  - 
 void
      pUnQLParser->expression(pUnQLParser)
 *  - 
 UnQLParser_property_return
      pUnQLParser->property(pUnQLParser)
 *  - 
 UnQLParser_integer_literal_return
      pUnQLParser->integer_literal(pUnQLParser)
 *  - 
 UnQLParser_real_literal_return
      pUnQLParser->real_literal(pUnQLParser)
 *  - 
 UnQLParser_string_literal_return
      pUnQLParser->string_literal(pUnQLParser)
 *  - 
 UnQLParser_true_literal_return
      pUnQLParser->true_literal(pUnQLParser)
 *  - 
 UnQLParser_false_literal_return
      pUnQLParser->false_literal(pUnQLParser)
 *  - 
 void
      pUnQLParser->dictionary_literal(pUnQLParser)
 *  - 
 void
      pUnQLParser->jsstring_literal(pUnQLParser)
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

#ifndef	_UnQLParser_H
#define _UnQLParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

	#include <string.h>
	#include <cybergarage/sql/SQLParser.h>
    
	#define CG_ANTLR3_STRING_2_UTF8(str) ((const char *)str->chars)
	#define CG_ANTLR3_STRING_2_INT(str) (str->chars ? atoi((const char *)str->chars) : 0)


#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct UnQLParser_Ctx_struct UnQLParser, * pUnQLParser;



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
typedef struct UnQLParser_condition_operator_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    UnQLParser_condition_operator_return;



typedef struct UnQLParser_ordering_specification_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    UnQLParser_ordering_specification_return;



typedef struct UnQLParser_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    UnQLParser_value_return;



typedef struct UnQLParser_collection_name_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    UnQLParser_collection_name_return;



typedef struct UnQLParser_property_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    UnQLParser_property_return;



typedef struct UnQLParser_integer_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    UnQLParser_integer_literal_return;



typedef struct UnQLParser_real_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    UnQLParser_real_literal_return;



typedef struct UnQLParser_string_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    UnQLParser_string_literal_return;



typedef struct UnQLParser_true_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    UnQLParser_true_literal_return;



typedef struct UnQLParser_false_literal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    UnQLParser_false_literal_return;





/** Context tracking structure for 
UnQLParser

 */
struct UnQLParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;

     void
     (*statement)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLParser *sqlParser);

     void
     (*select_stmt)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     void
     (*select_core)	(struct UnQLParser_Ctx_struct * ctx);

     void
     (*create_collection_stmt)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     void
     (*drop_collection_stmt)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     void
     (*insert_stmt)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLStatement *sqlStmt);

     bool
     (*sync_operator)	(struct UnQLParser_Ctx_struct * ctx);

     void
     (*compound_operator)	(struct UnQLParser_Ctx_struct * ctx);

     void
     (*table_name)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLFrom *sqlFrom);

     uSQL::SQLFrom *
     (*table_list)	(struct UnQLParser_Ctx_struct * ctx);

     uSQL::SQLWhere *
     (*where_section)	(struct UnQLParser_Ctx_struct * ctx);

     void
     (*condition_list)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLWhere *sqlWhere);

     void
     (*condition)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLWhere *sqlWhere);

     UnQLParser_condition_operator_return
     (*condition_operator)	(struct UnQLParser_Ctx_struct * ctx);

     uSQL::SQLOrders *
     (*sort_section)	(struct UnQLParser_Ctx_struct * ctx);

     void
     (*sort_specification_list)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLOrders *sqlOrders);

     void
     (*sort_specification)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLOrders *sqlOrders);

     UnQLParser_ordering_specification_return
     (*ordering_specification)	(struct UnQLParser_Ctx_struct * ctx);

     uSQL::SQLLimit *
     (*limit_section)	(struct UnQLParser_Ctx_struct * ctx);

     void
     (*limit_offset)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLLimit *sqlLimit);

     uSQL::SQLOffset *
     (*offset_section)	(struct UnQLParser_Ctx_struct * ctx);

     UnQLParser_value_return
     (*value)	(struct UnQLParser_Ctx_struct * ctx);

     void
     (*name)	(struct UnQLParser_Ctx_struct * ctx);

     UnQLParser_collection_name_return
     (*collection_name)	(struct UnQLParser_Ctx_struct * ctx);

     void
     (*expression)	(struct UnQLParser_Ctx_struct * ctx);

     UnQLParser_property_return
     (*property)	(struct UnQLParser_Ctx_struct * ctx);

     UnQLParser_integer_literal_return
     (*integer_literal)	(struct UnQLParser_Ctx_struct * ctx);

     UnQLParser_real_literal_return
     (*real_literal)	(struct UnQLParser_Ctx_struct * ctx);

     UnQLParser_string_literal_return
     (*string_literal)	(struct UnQLParser_Ctx_struct * ctx);

     UnQLParser_true_literal_return
     (*true_literal)	(struct UnQLParser_Ctx_struct * ctx);

     UnQLParser_false_literal_return
     (*false_literal)	(struct UnQLParser_Ctx_struct * ctx);

     void
     (*dictionary_literal)	(struct UnQLParser_Ctx_struct * ctx, uSQL::SQLExpression *sqlExpr);

     void
     (*jsstring_literal)	(struct UnQLParser_Ctx_struct * ctx);
    // Delegated rules

    const char * (*getGrammarFileName)();
    void            (*reset)  (struct UnQLParser_Ctx_struct * ctx);
    void	    (*free)   (struct UnQLParser_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pUnQLParser UnQLParserNew         (
pANTLR3_COMMON_TOKEN_STREAM
 instream);
ANTLR3_API pUnQLParser UnQLParserNewSSD      (
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
#define T__80      80
#define T__81      81
#define T__82      82
#define T__83      83
#define T__84      84
#define T__85      85
#define T__86      86
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
#define COMMA      17
#define CREATE      18
#define D      19
#define DESC      20
#define DISTINCT      21
#define DROP      22
#define E      23
#define EQ      24
#define ESC_SEQ      25
#define EXCEPT      26
#define EXPONENT      27
#define EscapeSequence      28
#define F      29
#define FLOAT      30
#define FROM      31
#define G      32
#define GE      33
#define GROUP      34
#define GT      35
#define H      36
#define HAVING      37
#define HEX_DIGIT      38
#define I      39
#define ID      40
#define IN      41
#define INSERT      42
#define INTERSECT      43
#define INTO      44
#define IS      45
#define J      46
#define K      47
#define L      48
#define LE      49
#define LIMIT      50
#define M      51
#define N      52
#define NOTEQ      53
#define NUMBER      54
#define O      55
#define OCTAL_ESC      56
#define OFFSET      57
#define OPTIONS      58
#define OP_LT      59
#define ORDER      60
#define P      61
#define Q      62
#define R      63
#define S      64
#define SELECT      65
#define STRING      66
#define SYNC      67
#define T      68
#define U      69
#define UNICODE_ESC      70
#define UNION      71
#define V      72
#define VALUE      73
#define W      74
#define WHERE      75
#define WS      76
#define X      77
#define Y      78
#define Z      79
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for UnQLParser
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
