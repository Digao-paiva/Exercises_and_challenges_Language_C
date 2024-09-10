/*

 	Example:  Make a program that reads, indefinitely, integer values. Whenever the user enters 
 	a number prime, store it in a 10-position vector. Once the tenth prime number is stored, 
 	close the reading and print, in a single line, the elements of the vector separated from 
 	each other by a single space. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define MAX 10
int main()
{
	int a[MAX], i = 0, j, prime, control;
	
	while(i < MAX){
        	control = 1;
        	scanf("%d", &prime);
        	for(j = 2; j < prime; j++){ 
        		if(prime % j == 0){
        			control = 0;
        	        	break;
           		}
        	}
       		if(control == 1 && prime != 1){
       			a[i] = prime;
            		i++; 
        	}
    	}
	
	for(i = 0; i < MAX; i++){
	    printf("%d ", a[i]);
	}
	
    return 0;
}