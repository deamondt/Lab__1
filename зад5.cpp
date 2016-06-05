#include <stdio.h>
int main ( void )
{
	float a ;
	
	printf ("\n\nVvedite vrema v formate _._ :  " ) ;
	scanf ( "%f" , &a ) ;
	if  ( ( a >= 6.00 ) && ( a <= 9.00 ) )  {
		printf ("\n\n\t\tDobroe utro!\n\n" ) ;
	} else {
		if  ( ( a > 10.30 ) && ( a <= 16.30 ) ){
			printf ("\n\n\t\tDobruy den!\n\n" ) ;
		} else {
			if  ( ( a > 18.30 ) && ( a <= 22.00 ) ) {
				printf ( "\n\n\t\tDobruy vesher!\n\n" ) ;
			} else {
				if  ( ( a > 19.35 ) && ( a <= 24.00 ) ) {
					printf ("\n\n\t\tSpokoynoy noshi!\n\n" ) ;
				} else {
					if  ( ( a > 00.00 ) && ( a <= 2.0 ) ) {
						printf ( "\n\n\t\tUge nosh!\n\n" ) ;
					} else {
						
					}
				}
			}
		}
	}
	
	return 0 ;
}
