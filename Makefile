## Makefile to check for syntax errors

check:
	g++ -fsyntax-only -Wall -Wextra *.hpp
