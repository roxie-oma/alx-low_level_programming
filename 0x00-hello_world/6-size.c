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
int i;
char c;
long int l;
long long int ll;
float f;

printf("the size of an int is: %lu byte(s)\n", (unsigned long) sizeof(i));
printf("the size of an  char is: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("the size of an long int is: %lu byte(s)\n", (unsigned long) sizeof(l));
printf("the size of an long long int is: %lu byte(s)\n", (unsigned long) sizeof(ll));
printf("the size of an float is: %lu byte(s)\n", (unsigned long) sizeof(f));

return (0);
}

