#include<stdio.h>

int main(void)
{
 char  buffer_old[101], buffer_new[101];

 printf("Current filename: ");
 gets_s(buffer_old, 100);

 printf("New filename: ");
 gets_s(buffer_new, 100);

 if(rename(buffer_old, buffer_new) == 0)
 {
  printf("%s has been rename %s.\n", buffer_old, buffer_new);
 }
 else
 {
  fprintf(stderr, "Error renaming %s.\n", buffer_old);
 }
}
