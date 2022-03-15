#include <stdio.h>
/**
* main - Entry point
*
* Description: prints the size of various types on the computer it is 
* compiled and run on
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
int i;
long int l;
long long int ll;
float f;

printf("the size of an char is: %d byte(s)\n", (int) sizeof(c));
printf("the size of an int is: %d byte(s)\n", (int) sizeof(i));
printf("the size of an long int is: %d byte(s)\n", (int) sizeof(l));
printf("the size of an long long int is: %d byte(s)\n", (int) sizeof(ll));
printf("the size of an float is: %d byte(s)\n", (int) sizeof(f));

return (0);
}

