/*
* base64.c
*
* CSCI 247, Fall 2016, Lab Exercise 2
*
* William Metzger
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stringy(char *arg[]) { //convert command args into string
	char string[1024];
	int i;

	for(i=0; arg[i] !='\0'; i++) {

		char *strcat(char *string, char *arg[i]);
	}

	return string;
}

int padding(*text) { //convert stored text to binary and return
	int bin;


	return bin;
}

void yalldonegoofed() {

	puts('You have entered an invlaid amount of arguments. Correct usage: ./base64 text to encode');
	exit(0);
}

int main(int argcount, char *arg[]) {

	if(argcount < 2 || argcount > 1024) yalldonegoofed();

	char string = stringy(arg);

}
