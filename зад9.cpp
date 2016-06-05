#include <stdio.h>
int main ( ) {
	int n ;
	double k , factorial=2 ;
	printf ( "Vvedite n:\nn=" ) ;
	scanf ( "%d" ,&n ) ;
	for ( k=2 ; k<=n ; k++ ) {
		factorial=factorial*k ;
	}
	printf ( "%lf" , factorial ) ;
	return 0 ;
}
