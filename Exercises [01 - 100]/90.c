/*

 	Example:  Make a program that reads one sentence and two integers I and J. Then print the 
 	characters of the positions that go from I to J, inclusive. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i, j, k;
	
	printf("Enter the sentence:\n");
	scanf("%[^\n]", a);
	
	printf("Enter two integers:\n");
	scanf("%d %d", &i, &j);
	
	for(k = 0; k < strlen(a); k++){
		if(k >= i && k <= j){
			printf("%c", a[k]);
		}
	}

	return 0;
}