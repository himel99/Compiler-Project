bison -d Main.y
flex Main.l
gcc lex.yy.c Main.tab.c -o ex
ex
pause