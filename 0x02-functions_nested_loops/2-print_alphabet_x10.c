#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
   int i;
   char n;
   char m;

   
   while (i < 10)
   {
       n = 'a';
       m = 'z';
       while(n <= m)
       {
           _putchar(n);
           n++;
       }
       
       
       _putchar('\n');
       i++;
       
   }
   
}
