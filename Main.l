%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "Main.tab.h"
%}
variable [a-zA-Z]*
digit [0-9]
header		"library ".*
Comment		[#].*
CommentMulti "'*"[^##]*"*'"

%%
{digit}+	{yylval.val = atoi(yytext); return NUMBER; }
"Main_Function"	   {printf("\n::::   MAIN Function started  ::::\n"); return MAIN; }
{Comment}		{printf("\nSingle line comment found :  ");ECHO;printf("\n");}
{CommentMulti}		{printf("\nMulti line comment found :  ");ECHO;printf("\n");}
{header}  				{printf("\nHeader file found :    ");ECHO;printf("\n");}
"+"			{return PLUS;}
"-"         {return MINUS;}
"*"           {return MUL;}
"/"           {return DIV;}
"MOD"           {return MOD;}
"INT"  		{return INT;}
"CHAR" 		     {return CHAR;}
"FLOAT"			 {return FLOAT;}
"ARRAY"			{return ARRAY;}
"SIN"			   {return SIN;}
"COS"            {return COS;}
"TAN"            {return TAN;}
"LOG"			   {return LOG;}
"LOG10" 		   {return LOG10;}
"CASE" 			{return CASE;}
"SWITCH" 		{return SWITCH;}
"DEFAULT" 		{return DEFAULT;}
"PRINT" 	{return PRINT; }
"IF" 			   {return IF;   }
"ELSE" 		   {return ELSE; }
"ELSEIF"       {return ELSEIF; }
"$*" 		   {return BS;  }
"*$"  		   {return BE;	}
"FOR_LOOP" 		   {return LOOP;}
"REVERSE_FOR_LOOP" 		   {return REVERSE_LOOP;}
"WHILE"		   {return WHILE;}
"REVERSE_WHILE"		   {return REVERSE_WHILE;}
"FACT"		{return FACTORIAL;}
"ODD_EVEN"		{return ODDEVEN;}
[-+/*<>=,():;%^]     {	return yytext[0];	}
"["				{	return yytext[0];	}
"]"				{	return yytext[0];	}
{variable}	    {ECHO;printf("\n"); strcpy(yylval.str,yytext); return	VAR; }
[ ]*	    			{}
[\n]*					{}
[\t]*					{}
.						{printf("\nUnknown syntax : %s\n",yytext);}


%%