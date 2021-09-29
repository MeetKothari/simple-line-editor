simp : main.o user.o interface.o dlists.o
	gcc -g -o sle main.o user.o interface.o dlists.o		
main.o : main.c globals.h dlists.h user.h
	gcc -g -c -ansi -Wall main.c
user.o : user.c globals.h user.h dlists.h interface.h
	gcc -g -c -ansi -Wall user.c
interface.o : interface.c globals.h dlists.h interface.h 
	gcc -g -c -ansi -Wall interface.c
dlists.o : dlists.c dlists.h globals.h  
	gcc -g -c -ansi -Wall dlists.c
clean :
	rm -f *.o sle

