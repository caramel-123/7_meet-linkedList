#include <stdio.h>

int main() {
  FILE *fp;
  fp = fopen("//Users//melfredbernabe//PROGRAMS_melfred//CPRO1-2//cpro1-2_c//8_meet//output//MyFamily.dat", "rb");
  char code[80] = "I love BSCS, yeah yeah";
  
  fread(&code, sizeof(code), 1, fp);
  printf("%s\n", code);

  fclose(fp);

  return 0;
}