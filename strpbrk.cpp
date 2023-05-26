/* strpbrk example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "Thji is a sample string";
  char key[] = "jaeiou";
  char * pch;
  printf ("Vowels in '%s': ",str);
  pch = strpbrk (str, key);
  while (pch != NULL)
  {
    printf ("%c " , *pch);
    pch = strpbrk (pch+1,key);
  }
  printf ("%c " , *pch);
  printf ("\n");
  return 0;
}
