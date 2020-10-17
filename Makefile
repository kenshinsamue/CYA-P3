
# Macros

CC = g++
OBJ = main.o palindrome_prod.o operacion.o

all: $(OBJ)
	$(CC) -std=c++14 -g -Wall -o palindrome_prod $(OBJ)
	$(RM) $(OBJ)
clean:
	$(RM) $(OBJ) palindrome_prod  
main.o: main.cc
palindrome_prod.o: palindrome_prod.cc 
operacion.o:operacion.cc