/*** Definition Section ***/
/* C code to be copied verbatim */
%{
	#include <iostream>
	#include <istream>
	#include <ostream>
	#include <FlexLexer.h>
	#include "../parser/yacc.hpp"
	#include <stdlib.h>
	#include <unistd.h>
	#include "../header/tokens.h"
	using namespace std;

	int lineNo = 1;
	int colNo = 1;

%}

/* options */

%option c++

/* This tells flex to read only one input file */
%option noyywrap

/* define state */
%x multilinecomment


/* Flex definition */
Real					([+ -]?[0-9]+"."+[0-9]+)|([+ -]?[0-9]+"."+[0-9]+[e E]+[0-9]+)|([+ -]?[0-9]+[e E]+[0-9]+)
Single_line_comment		(\/\/)+[^\n]*

Integer					[+ -]?[0-9]*|0
Float                   ({Integer}[f F])|({Real}[f F])
Double                  ({Integer}[d D])|({Real}[d D]?)
Long                    {Integer}[l L]?
String					["].*["]
Identifier              [a-zA-Z_][a-zA-Z0-9_]*








/*** RULE Section ***/

%%

"using static"	{	colNo += strlen(yytext);	printf("using static\n");}
"using"			{	colNo += strlen(yytext);	printf("using\n");		}
"namespace"		{	colNo += strlen(yytext);	printf("namespace\n");	}



"if"			{	colNo += strlen(yytext);	printf("if\n");			}
"else"			{	colNo += strlen(yytext);	printf("else\n");		}	

"foreach"		{	colNo += strlen(yytext);	printf("foreach\n");	}
"for"			{	colNo += strlen(yytext);	printf("for\n");		}				
"as"			{	colNo += strlen(yytext);	printf("as\n");			}				
"while"			{	colNo += strlen(yytext);	printf("while\n");		}
"break"			{	colNo += strlen(yytext);	printf("break\n");		}
"switch"		{	colNo += strlen(yytext);	printf("switch\n");		}
"case"			{	colNo += strlen(yytext);	printf("case\n");		}
"do"			{	colNo += strlen(yytext);	printf("do\n");			}
"goto"			{	colNo += strlen(yytext);	printf("goto\n");		}
"default"		{	colNo += strlen(yytext);	printf("default\n");	}
"continue"		{	colNo += strlen(yytext);	printf("continue\n");	}
				
"class"			{	colNo += strlen(yytext);	printf("class\n");		}
"struct"		{	colNo += strlen(yytext);	printf("struct\n");		}
"interface"		{	colNo += strlen(yytext);	printf("interface\n");	}
"enum"			{	colNo += strlen(yytext);	printf("enum\n");		}


"public"		{	colNo += strlen(yytext);	printf("public\n");		}
"private"		{	colNo += strlen(yytext);	printf("private\n");	}
"protected"		{	colNo += strlen(yytext);	printf("protected\n");	}
		
"abstract"		{	colNo += strlen(yytext);	printf("abstract\n");	}
"sealed"		{	colNo += strlen(yytext);	printf("sealed\n");		}

"static"		{	colNo += strlen(yytext);	printf("static\n");		}	
"override"		{	colNo += strlen(yytext);	printf("override\n");	}
"virtual"		{	colNo += strlen(yytext);	printf("virtual\n");	}

"base"			{	colNo += strlen(yytext);	printf("base\n");		}
"this"			{	colNo += strlen(yytext);	printf("this\n");		}

"object"		{	colNo += strlen(yytext);	printf("object\n");		}

				
"try"			{	colNo += strlen(yytext);	printf("try\n");		}
"catch"			{	colNo += strlen(yytext);	printf("catch\n");		}
"throw"			{	colNo += strlen(yytext);	printf("throw\n");		}
"finally"		{	colNo += strlen(yytext);	printf("finally\n");	}



"char"			{	colNo += strlen(yytext);	printf("char\n");		}
"string"		{	colNo += strlen(yytext);	printf("string\n");		}
"float"			{	colNo += strlen(yytext);	printf("float\n");		}				
"double"		{	colNo += strlen(yytext);	printf("double\n");		}				
"byte"			{	colNo += strlen(yytext);	printf("byte\n");		}
"sbyte"			{	colNo += strlen(yytext);	printf("sbyte\n");		}
"short"			{	colNo += strlen(yytext);	printf("short\n");		}
"ushort"		{	colNo += strlen(yytext);	printf("ushort\n");		}
"int"			{	colNo += strlen(yytext);	printf("int\n");		}
"uint"			{	colNo += strlen(yytext);	printf("uint\n");		}
"long"			{	colNo += strlen(yytext);	printf("long\n");		}
"ulong"			{	colNo += strlen(yytext);	printf("ulong\n");		}
"decimal"		{	colNo += strlen(yytext);	printf("decimal\n");	}
"bool"			{	colNo += strlen(yytext);	printf("bool\n");		}		
"void"			{	colNo += strlen(yytext);	printf("void\n");		}

"checked"		{	colNo += strlen(yytext);	printf("checked\n");	}
"typeof"		{	colNo += strlen(yytext);	printf("typeof\n");		}
"sizeof"		{	colNo += strlen(yytext);	printf("sizeof\n");		}
"operator"		{	colNo += strlen(yytext);	printf("operator\n");	}

"true"			{	colNo += strlen(yytext);	printf("true\n");		}
"false"			{	colNo += strlen(yytext);	printf("false\n");		}

				
"const"			{	colNo += strlen(yytext);	printf("const\n");		}			
"ref"			{	colNo += strlen(yytext);	printf("ref\n");		}			
"new"			{	colNo += strlen(yytext);	printf("new\n");		}		
"readonly"		{	colNo += strlen(yytext);	printf("readonly\n");	}		
"null"			{	colNo += strlen(yytext);	printf("null\n");		}		

"params"		{	colNo += strlen(yytext);	printf("params\n");		}		


"fixed"			{	colNo += strlen(yytext);	printf("fixed\n");		}				

\n				{	colNo=1;	lineNo++;	}
\t 				{	colNo+=4;	}			
" "				{	colNo++;	}
"("				{	colNo++;	}
")"				{	colNo++;	}
"{"				{	colNo++;	}
"}"				{	colNo++;	}
"["				{	colNo++;	}
"]"				{	colNo++;	}
";"				{	colNo++;	}


				
				
				
				
\+			{	colNo += strlen(yytext);	printf("plus\n");			}	
"-"			{	colNo += strlen(yytext);	printf("minus\n");			}	
"*"			{	colNo += strlen(yytext);	printf("multiple\n");		}	
"/"			{	colNo += strlen(yytext);	printf("divide\n");			}						
"="			{	colNo += strlen(yytext);	printf("assigment\n");		}					
"++"		{	colNo += strlen(yytext);	printf("plus plus\n");		}	
"--"		{	colNo += strlen(yytext);	printf("minus minus\n");	}	
"+="		{	colNo += strlen(yytext);	printf("plus eq\n");		}	
"-="		{	colNo += strlen(yytext);	printf("minus eq\n");		}	
"*="		{	colNo += strlen(yytext);	printf("mult eq\n");		}	
"/="		{	colNo += strlen(yytext);	printf("div eq\n");			}	



"<"			{	colNo += strlen(yytext);	printf("smaller\n");		}
">"			{	colNo += strlen(yytext);	printf("bigger\n");			}
"<="		{	colNo += strlen(yytext);	printf("smaller or eq\n");	}
">="		{	colNo += strlen(yytext);	printf("bigger or eq\n");	}
"=="		{	colNo += strlen(yytext);	printf("equal\n");			}
"!="		{	colNo += strlen(yytext);	printf("not equal\n");		}






"oberator"	{	colNo += strlen(yytext);	printf("oberator\n");	}
"Namespace" {	colNo += strlen(yytext);	printf("namespace\n");	}
"event"		{	colNo += strlen(yytext);	printf("event\n");		}
"extern"	{	colNo += strlen(yytext);	printf("extern\n");		}
"implicit"	{	colNo += strlen(yytext);	printf("implicit\n");	}
"internal"  {	colNo += strlen(yytext);	printf("internal\n");	}
"lock"		{	colNo += strlen(yytext);	printf("lock\n");		}
"uncheched"	{	colNo += strlen(yytext);	printf("uncheched\n");	}

"set"		{	colNo += strlen(yytext);	printf("set\n");		}






"unsafe"	{	colNo += strlen(yytext);	printf("unsafe\n");		}




"delegate"	{	colNo += strlen(yytext);	printf("delegate\n");	}
"explicit"	{	colNo += strlen(yytext);	printf("explicit\n");	}

"get"		{	colNo += strlen(yytext);	printf("get\n");		}
"in"		{	colNo += strlen(yytext);	printf("in\n");			}
"is"		{	colNo += strlen(yytext);	printf("is\n");			}

"out"		{	colNo += strlen(yytext);	printf("out\n");		}

"reaonly"	{	colNo += strlen(yytext);	printf("reaonly\n");	}
"return"	{	colNo += strlen(yytext);	printf("return\n");		}

"stackloc"	{	colNo += strlen(yytext);	printf("stackloc\n");	}
"unit"		{	colNo += strlen(yytext);	printf("unit\n");		}

"value"		{	colNo += strlen(yytext);	printf("value\n");		}
"volatle"	{	colNo += strlen(yytext);	printf("volatle\n");	}



\/\*                           		{ BEGIN multilinecomment; }
<multilinecomment>[^*\n]*			{;}
<multilinecomment>"*"+[^*/\n]*		{lineNo++;}
<multilinecomment>"*"+"/"           { BEGIN INITIAL;	printf("multi line comment.\n");}

{Single_line_comment}				{ printf("single line comment.\n");	lineNo++;	}

									
																
{Identifier}						{ 	colNo += strlen(yytext);	printf("Identifier\n");		}

{Integer}							{
										colNo += strlen(yytext);
										int x=atoi(yytext);
										cout<<x<<endl;
										cout<<"Integer"<<endl; 
										
									}
{Float}								{
										colNo += strlen(yytext);
										float x=atof(yytext);
										cout<<x<<endl;
										cout <<"Float"<<endl;
										
									}
{Double}							{
										colNo += strlen(yytext);
										double x=atof(yytext);
										cout<<x<<endl;
										cout <<"Double"<<endl;
										
									}
{Long}								{
										colNo += strlen(yytext);
										long x=atol(yytext);
										cout<<x<<endl;
										cout <<"Long"<<endl;
										
									}
{String}							{

										 colNo += strlen(yytext);
										 cout <<"string\n"; 

									}

											

%%




/*** C Code Section **/