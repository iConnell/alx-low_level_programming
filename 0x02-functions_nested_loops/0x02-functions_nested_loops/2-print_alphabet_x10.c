#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char alphabet;
for (int i = 0; i < 10; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
}
}
