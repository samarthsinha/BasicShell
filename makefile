main:
	gcc -c ls.c getHostname.c catSol.c 
	gcc -o shell shell.c ls.o getHostname.c catSol.o
clear:
	rm *.o
