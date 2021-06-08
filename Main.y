%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	#include "symbol_table.h"
	int  yyerror(char *s);
    int yylex();

	int checkSwitch, def;

	
%}

/* bison declarations */

%union{
	char str[1001];
	int val;
}

%token MAIN IF ELSE ELSEIF PLUS MINUS MUL DIV MOD ARRAY INT FLOAT CHAR BS BE LOOP WHILE ODDEVEN PRINT FACTORIAL CASE DEFAULT SWITCH REVERSE_LOOP REVERSE_WHILE SIN COS TAN LOG LOG10
%token<val>NUMBER
%type<val>statement expression
%token<str>VAR
%nonassoc IFX
%nonassoc ELSEIF
%nonassoc ELSE
%left '<' '>'
%left MOD
%left PLUS MINUS
%left MUL DIV
%left '^'

/* Grammar rules and actions follow.  */

%%

start_program: MAIN ':' BS body_inside BE {printf("\n::::    MAIN Function END    ::::\n");}
	 ;

body_inside: /* NULL */

	| body_inside statement	{ }
	;

statement: ';'	{ }		
	| declaration ';'		{  }

	| expression ';' 			{   printf("value of expression: %d\n", $1); $$=$1;
		printf("\n\n");
		}
	
	| VAR '=' expression ';' { 
							printf("\nValue of the variable : %d\n",$3);
							setVal($1,$3);
							//data[$1]=$3;
							$$=$3;
							printf("\n\n");
						} 

	| IF '(' expression ')' BS statement BE %prec IFX {
								if($3){
									printf("\nvalue of expression in IF : %d\n",$6);
								}
								else{
									printf("\ncondition value zero in IF block\n");
								}
								printf("\n\n");
							}

	| IF '(' expression ')' BS statement  BE ELSE BS statement BE  {
								if($3){
									printf("value of expression in IF : %d\n",$6);
								}
								else{
									printf("value of expression in ELSE : %d\n",$10);
								}
								printf("\n\n");
							}
	| IF '(' expression ')' BS statement  BE ELSEIF '(' expression ')' BS statement BE ELSE BS statement BE {
									if($3){
									printf("value of expression in IF : %d\n",$6);
								}
								else if($10){
									printf("value of expression in ELSE-IF : %d\n",$13);
								}
								else{
									printf("value of expression in ELSE : %d\n",$17);
								}
								printf("\n\n");
	}




	| LOOP '(' NUMBER ',' NUMBER ',' NUMBER ')' BS statement BE {
	                                int i;
	                                printf("For Loop execution\n");
	                                for(i=$3 ; i<$5 ; i=i+$7 ) 
	                                {printf("\nvalue of i : %d expression value : %d\n", i,$10);}
	                                printf("\n\n");

				               }

	| REVERSE_LOOP '(' NUMBER ',' NUMBER ',' NUMBER ')' BS statement BE {
	                                int i;
	                                printf("Reverse For Loop execution\n");
	                                for(i=$3 ; i>=$5 ; i=i-$7 ) 
	                                {printf("\nvalue of i : %d expression value : %d\n", i,$10);}
	                                printf("\n\n");

				               }


	| PRINT '(' expression ')' ';' {printf("\nPrint Expression %d\n",$3);
		printf("\n\n");}


	| ODDEVEN '(' NUMBER ')' ';' {
		printf("Odd Even Number detection \n");

		if($3 %2 ==0){
			printf("Number : %d is -> Even\n",$3);
		}
		else{
			printf("Number is : %d is -> Odd\n",$3);
		}
		printf("\n\n");
		}

	| ARRAY TYPE VAR '[' NUMBER ']' ';' {
		printf("\nARRAY Declaration  [ ]\n");
		
		printf("\nSize of the ARRAY is : %d\n",$5);
		printf("\n\n");
	}

	| SWITCH '(' NUMBER ')'		{ checkSwitch = $3;
									printf("\nCheck Switch  : %d\n",checkSwitch);}
				BS SWITCHCASE BE {
		printf("\nSWITCH CASE Declaration  &  Case : %d executed\n",checkSwitch);
        printf("\n\n");
	}

	| WHILE '(' NUMBER '<' NUMBER ')' BS statement BE {
	                                int i;
	                                printf("\n WHILE Loop execution \n");
	                                for(i=$3 ; i<$5 ; i++) {printf("\niteration loop : %d    \n", i);}
	                                printf("\n\n");
	                                								
				               }

	| REVERSE_WHILE '(' NUMBER '>' NUMBER ')' BS statement BE {
	                                int i;
	                                printf("\n REVERSE WHILE Loop execution \n");
	                                for(i=$3 ; i>$5 ; i--) {printf("\niteration loop : %d    \n", i);}
	                                printf("\n\n");
	                                								
				               }

	;
	

	
declaration : TYPE ID1   {printf("\nvariable Dection\n");
		printf("\n\n");}
            ;


TYPE : INT   {printf("interger declaration\n");}
     | FLOAT  {printf("float declaration\n");}
     | CHAR   {printf("char declaration\n");}
     ;



ID1 : ID1 ',' VAR {
	int res = addNewVal($3);
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);
		}
	} 
    |VAR {
		int res = addNewVal($1);
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);
		}
	}  
    ;

 SWITCHCASE: casegrammer	
 			|casegrammer defaultgrammer
 			;

 casegrammer: /*empty*/
 			| casegrammer casenumber
 			;

 casenumber: CASE NUMBER ':' expression ';' { int check = $2;
											if(check == checkSwitch)
											{
												printf("\nCase No : %d & expression value : %d \n",$2,$4);
												def = -1000;
											}
										}
 			;
 defaultgrammer: DEFAULT ':' expression ';' {
				if(def != -1000)
				{
					printf("\nDefault case & expression value : %d",$3);
				}
 				
 			}
 		;


expression: NUMBER					{  $$ = $1;  }

	| VAR						{ $$ = getVal($1); }
	
	| expression PLUS expression	{printf("\nAddition : %d+%d = %d \n",$1,$3,$1+$3 );  $$ = $1 + $3;}

	| expression MINUS expression	{printf("\nSubtraction : %d-%d=%d \n ",$1,$3,$1-$3); $$ = $1 - $3; }

	| expression MUL expression	{printf("\nMultiplication : %d*%d \n ",$1,$3,$1*$3); $$ = $1 * $3; }

	| expression DIV expression	{ if($3){
				     					printf("\nDivision : %d/%d \n ",$1,$3,$1/$3);
				     					$$ = $1 / $3;
				     					
				  					}
				  					else{
										$$ = 0;
										printf("\nDivision by zero\n\t");
				  					} 	
				    			}
	| expression MOD expression	{ if($3){
				     					printf("\nMod : %d MOD %d \n",$1,$3,$1 % $3);
				     					$$ = $1 % $3;
				     					
				  					}
				  					else{
										$$ = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			}
	| expression '^' expression	{printf("\nPower  : %d ^ %d \n",$1,$3,$1 ^ $3);  $$ = pow($1 , $3);}
	| expression '<' expression	{printf("\nLess Than : %d < %d \n",$1,$3,$1 < $3); $$ = $1 < $3 ; }
	
	| expression '>' expression	{printf("\nGreater than : %d > %d \n ",$1,$3,$1 > $3); $$ = $1 > $3; }

	| '(' expression ')'		{	 $$ = $2; }

	| SIN '(' expression ')'  			{printf("Value of Sin(%d) is %lf\n",$3,sin($3*3.1416/180)); $$=sin($3*3.1416/180);}

    | COS '(' expression ')'  			{printf("Value of Cos(%d) is %lf\n",$3,cos($3*3.1416/180)); $$=cos($3*3.1416/180);}

    | TAN '(' expression ')' 			{printf("Value of Tan(%d) is %lf\n",$3,tan($3*3.1416/180)); $$=tan($3*3.1416/180);}

    | LOG10 '(' expression ')' 			{printf("Value of Log10(%d) is %lf\n",$3,(log($3*1.0)/log(10.0))); $$=(log($3*1.0)/log(10.0));}

	| LOG '(' expression ')'  			{printf("Value of Log(%d) is %lf\n",$3,(log($3))); $$=(log($3));}

	| FACTORIAL '(' NUMBER ')'  {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=$3;i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d is : %d\n",$3,f);
		printf("\n\n");

		}
	
	;
%%


int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	freopen("input_test.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	yyparse();

    
	return 0;
}

