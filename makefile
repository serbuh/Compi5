all:
	bison -d hw4.ypp; flex hw4.lex; g++ -g -std=c++0x lex.yy.c hw4.tab.cpp bp.cpp output.cpp -o ex5.exe;

