#include <stdio.h>
int main ( )
{
	int year , y , y2 , y3 ;
	
	printf ( "\ nVvedite god: " ) ;
	scanf ( "%d" , &year ) ;
	
	y = year%4 ;
	y2 = year%100 ; 
	y3 = year%400 ;
	
	if  ( ( y2 == 1 ) && ( y3 != 1 ) )  {
		printf ( "\ nV etom godu 365 dney.\n" ) ;
	} else {
		if  ( y == 1 )  {
			printf ( "\ nV etom godu 366 dney.\ n" ) ;
		} else {
			printf ( "\ nV etom godu 365 dney.\ n" ) ;
		}
	}
	
	return 0 ;
}
