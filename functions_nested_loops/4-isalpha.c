#include "main.h"
/**
* _isalpha - checks if a character is lowercase or uppercase
* @c: char passed as argument
* Return: 1 if c is lowercase or uppercase
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
