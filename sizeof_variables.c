#include <stdio.h>

int main()
{
	int integer;
	char character;
	float number;
	double decimals;


	/* __format specifiers__
	 *
	 * integer	 %d or %i
	 * short int	 %hd
	 * character	 %c
	 * float	 %f
	 * double	 %lf
	 * long double 	 %Lf 
	 * long integer  %ld or %li
	 * long long int %lld or %lli
	 * unsigned long int	  %lu
	 * unsigned long long int %llu
	 * signed char		   %c
	 */

	printf("The size of the int is %d bytes\n", sizeof(int));
	printf("The size of character is %d bytes\n", sizeof(char));
	printf("The size of float is %d bytes\n", sizeof(float));
	printf("The size of a double is %d bytes\n", sizeof(double));
	printf("The size of a short int is %hd bytes\n", sizeof(short int));
	printf("The size of unsigned int is %d bytes\n", sizeof(unsigned int));
	printf("The size of a signed int is %d bytes\n", sizeof(signed int));
	printf("The size of a long int is %d bytes\n", sizeof(long int));
	printf("The size of a long long int is %d bytes\n", sizeof(long long int));

}

