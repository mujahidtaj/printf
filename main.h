#include <stdio.h>

int main()
{
	char str[] = "THE SKY IS BLUE";
	printf("\nThe value returned by printf() for the above string is : %d", printf("%s", str));
	fprintf( stdout, "hello world\n" );

	return 0;
}
