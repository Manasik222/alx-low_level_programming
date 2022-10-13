#include <stdio.h>
/**
*main -Entry point
*Return: Always 0 (success)
*/
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(acharacter));
	printf("size of an int: %zu byte(s)\n", sizeof(ainteger));
	printf("size of a long int: %zu byte(s)\n", sizeof(along));
	printf("size of a long long int: %lu byte(s)\n", sizeof(alonglong));
	printf("size of a float: %zu byte(s)\n", sizeof(afloat));
	return (0);
}
