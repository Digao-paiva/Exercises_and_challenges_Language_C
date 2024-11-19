/*

 	Example:  Alice wants to type her name with upper and lower caracters, but then all the 
 	caracters has to be in upper case. Your mission is to corretly change all the caracters to 	
 	upper case.
 	Youtube lesson: https://youtu.be/b4UHZo5zwUk
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char string[100];
	int i;
	
	printf("Enter a sentence:\n");
	scanf("%[^\n]", string);
	
	for(i = 0; i < strlen(string); i++){
		string[i] = toupper(string[i]);
	}
	
	printf("%s\n", string);
	
	return 0;
}
