#include <stdio.h>
/**
* main - print the size of various types
*
* Description: prints the size of various types on the computer it is 
* compiled and run on
*
* Return: Always 0 (Success)
*/
int main(void)
{

printf("the size of an char is: %d byte(s)\n", (int) sizeof(char));
printf("the size of an int is: %d byte(s)\n", (int) sizeof(int));
printf("the size of an long int is: %d byte(s)\n", (int) sizeof(long int));
printf("the size of an long long int is: %d byte(s)\n", (int) sizeof(long long int));
printf("the size of an float is: %d byte(s)\n", (int) sizeof(float));

return (0);
}

