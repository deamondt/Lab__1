#include <stdio.h>

int main ( )
{
	float s , y ;
	
	printf ( "\ nVvedite 's': " ) ;
	scanf ( "%f" , &s ) ;
	
	if  ( ( -5 <= s ) && ( s <= 10 ) )  {
		y = s * s ;
		printf ( "\ nf(s)= %.3f" , y ) ;
	} else {
		y = 7 * s ;
		printf ( "\ nf(s)= %.3f" , y ) ;
	}
	
	return 0 ;
} 
