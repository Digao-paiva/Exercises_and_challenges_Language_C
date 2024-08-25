/*

 	Example: Write a progam, that reads 6 integer values and stores them in a vector. Next, 
 	print the reverse of the vector.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define MAX 6
int main()
{
	int n[MAX], i;

	printf("Enter the 6 integer values:\n");
	
	for(i = 0; i < MAX; i++){
		scanf("%d", &n[i]);
	}
	
	printf("The reverse of the vector is:\n");
	
	for(i = MAX - 1; i >= 0; i--){
		printf("%d ", n[i]);
	}
	
	printf("\n");
	
	return 0;
}	
