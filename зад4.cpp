#include <stdio.h>

	int main ( )
{
	float s , y ;
	
	printf ( "\nVvedite 'g': " ) ;
	scanf ( "%f" , &s ) ;
	
	if  ( s <= 1 )  {
		y = 1 ;
		printf ( "\nf(s)= %.3f" , y ) ;
	} else {
		if  ( ( 0 < s ) && ( s <= 2 ) )  {
			y = s ;
			printf ( "\nf(s)= %.3f" , y ) ;
		} else {
			y = s * s * s ;
			printf ( "\nf(s)= %.3f" , y ) ;
		}
	}
	
	return 0 ;
}
