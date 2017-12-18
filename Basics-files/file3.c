#include<stdio.h>

 int main(void)
 {
  char buffer[101];

  printf("Name of file to delete:  ");
  gets_s(buffer, 100);

  if(remove(buffer) == 0)
    printf("File %s  deleted.\n", buffer);
  else
    fprintf(stderr, "Error deleting the file %s.\n", buffer);
 }
