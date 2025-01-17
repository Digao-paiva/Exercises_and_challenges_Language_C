/*

 	Example:  Using only pointers, write a program that reads a sentence of up to 80 characters 
 	and prints it in reverse order by converting all lowercase characters to uppercase. 
 	Youtube lesson: https://youtu.be/s9okU0SriUA
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char array[80], *p;
	int i;
	
	printf("Enter the sentence:\n");
	scanf("%[^\n]", array);
	
	for(i = strlen(array) - 1; i >= 0; i--){ 
		p = &array[i];
		if(isupper(*p)){
			printf("%c", *p);
		}
		else{ 
			printf("%c", toupper(*p));
		}
	}
	
	printf("\n");
	
	return 0;
}
