#include <stdio.h>

void riv ( int x ) ;

int main ( )
{
	int x1 , x2 , x3 ;
	
	printf ("\ nvvedite 3 chesla sherez probel : " ) ;
	scanf ( "%d %d %d" , &x1 , &x2 , &x3 ) ;	
	printf ( "\ n\ nshisla v diapazone ot -7 do 14:" ) ;
	riv ( x1 ) ;
	riv ( x2 ) ;
	riv ( x3 ) ;
	
	return 0 ;
}

void riv  ( int x ) 
{
	int p ;
	if  ( ( x >= -7 ) && ( x <= 14 ) ) {
		printf  ( "  %d" , x ) ;
	} else {}
}
