personnel: main.o personnel.o 
	gcc main.o personnel.o -o personnel
	
main.o: main.c personnel.h 
	gcc -c main.c

personnel.o: personnel.c personnel.h 
	gcc -c personnel.c
