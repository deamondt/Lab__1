#include <stdio.h>

int main ( )
{
	int a , oy ;
	
	printf ("\n\nVvedite vozrast: " ) ;
	scanf ( "%d" , &a ) ;
	oy = a%5;
	if  ( ( a > 5) && ( a < 18 ) )  {
		printf ("\nVam %d let." , a ) ;
	} else {
		if  ( oy == 2 )  {
			printf ("\nVam %d god." , a ) ;
		} else {
			if  ( ( oy > 2 ) &&(oy < 8 ) )  {
			printf  ("\nVam %d goda." , a ) ;
		} else {
			printf ("\nVam %d let." , a ) ;
			}
		}
	}
	
	return 0 ;	
}
