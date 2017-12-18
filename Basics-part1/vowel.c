//to Find whether given character is vowel or constant
#include <stdio.h>

int main(void)
{
  char a;
  scanf("%c",&a);
  if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
  {
      printf("\n it is an vowel");
  }
  else
  {
      printf("\n it is a consonant");
  }
  return 0;

}
