#include <stdio.h>

int main() {
  FILE *fp;
  fp = fopen("//Users//melfredbernabe//PROGRAMS_melfred//CPRO1-2//cpro1-2_c//8_meet//output//MyFamily.txt", "r");
  char name[15];
  
  while (fscanf(fp, "%s\n", name) != EOF) {
    printf("%s\n", name);
  }

  fclose(fp);

  return 0;
}