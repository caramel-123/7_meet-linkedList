#include <stdio.h>

int main() {
  FILE *fp;
  fp = fopen("//Users//melfredbernabe//PROGRAMS_melfred//CPRO1-2//cpro1-2_c//8_meet//output//MyFamily.txt", "w");
  fprintf(fp, "This is tutorial.com");

  fseek(fp, 7, SEEK_SET);
  fprintf(fp, " C Programming Language");
  fclose(fp);
  
  return 0;
}