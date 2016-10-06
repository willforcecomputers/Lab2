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

	for(i=1; arg[i] !='\0'; i++) {

		char *strcat(char *string, char *arg[i]);
	}

	return string;
}

char padding(*text) { //pad input args by  finding length and mod by 3 then adding needed bits
	char padded = text;
	int leng = strlen(text);
	int need = (3 - (leng % 3)) * 8;

	padded = padded << need;

	return padded;
}

char encode(*text) { //takes input string after padding and converts to base64 characters from a table
	char basetable[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
						'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
						'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
						'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
						'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
						'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
						'w', 'x', 'y', 'z', '0', '1', '2', '3',
						'4', '5', '6', '7', '8', '9', '+', '/'
	};
	char encoded;
	int i;

	for(i = 0; text[i] !='\0'; i = i + 3) {
		int q;
		char ch1 = text[i];
		char ch2 = text[i + 1];
		char ch3 = text[i + 2];
		int evaluate = ((int)ch1 << 16) + ((int)ch2 << 8) + ch3;

		char evald1 = (evaluate & 0xFC0000) >> 18;
		char evald2 = (evaluate & 0x3C000) >> 12;
		char evald3 = (evaluate & 0xFC0) >> 6;
		char evald4 = evaluate & 0x3F;

		char encoded1 = basetable[evald1];
		char encoded2 = basetable[evald2];
		char encoded3 = basetable[evald3];
		char encoded4 = basetable[evald4];

		char *strcat(char *encode, char *encoded1);
		char *strcat(char *encode, char *encoded2);
		char *strcat(char *encode, char *encoded3);
		char *strcat(char *encode, char *encoded4);
	}

	return encoded;
}

void yalldonegoofed() { //quits program and displays an error

	puts('You have entered an invlaid amount of arguments. Correct usage: ./base64 text to encode');
	exit(0);
}

int main(int argcount, char *arg[]) {

	if(argcount < 2 || argcount > 1024) yalldonegoofed();

	char string = stringy(arg);
	string = padding(string);
	string = encode(string);
	printf("Your original string was %s\n Your encoded string is: %s\n", *arg, string);
}
