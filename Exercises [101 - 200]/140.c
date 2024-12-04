/*

 	Example:  Make a Boolean function that takes two strings A and B, and make sure that string 
 	A is contained at the end of string B. The function must return 0 (for no) or 1 (for yes). 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int check(char *a, char *b);

int main() {
	char *a, *b;
	int answer = 0, i;
	
	a = (char *)malloc(50 * sizeof(char));
	b = (char *)malloc(50 * sizeof(char));

	if(a == NULL || b == NULL) {
		exit(1);
	}
	
	printf("Enter the first string:\n");
	for(i = 0; i < 50; i++) {
		scanf(" %c", (a + i));
		if(*(a + i) == '\n') {
			break;
		}
	}
	
	printf("Enter the second string:\n");
	for(i = 0; i < 50; i++) {
		scanf(" %c", (b + i));
		if(*(b + i) == '\n'){
			break;
		}
	}
	
	answer = check(a, b);
	printf("%d\n", answer);

	free(a);
	free(b);
	
	return 0;
}

int check(char *a, char *b) {
	int i = 0, j, check = 0;
		while(i < strlen(a)) {
			for(j = strlen(b) - strlen(a); j < strlen(b); j++) {
				if(*(a + i ) != *(b + j)) {
					return 0;
					check = 1;
					break;
				}
				else i++;
			}	
		}
		if(check == 0) {
			return 1;
		}
	return -1;
}
