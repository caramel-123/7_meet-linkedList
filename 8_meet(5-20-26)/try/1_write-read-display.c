#include <stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("1_write.txt", "w");
  fprintf(fptr, "Hello po");
  fclose(fptr);

  fptr = fopen("1_write.txt")


  return 0;
}