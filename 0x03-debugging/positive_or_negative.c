#include "main.h"

/**
* main - Entry point
* positive_or_negative - check for positive or negative numbers
* @i: the number to be checked
* Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
if (i < 0)
{
printf("%d is negative\n", i);
}
if (i == 0)
{
printf("%d is zero\n", i);
}
}
