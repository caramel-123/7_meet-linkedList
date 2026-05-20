#include <stdio.h>

int main() {
  FILE *fp;
  fp = fopen("//Users//melfredbernabe//PROGRAMS_melfred//CPRO1-2//cpro1-2_c//8_meet//output//MyFamily.txt", "r");
  
  char ch;
  fseek(fp, 5, SEEK_SET);
    ch = fgetc(fp);
    printf("%c\n", ch);
  
  fseek(fp, -3, SEEK_CUR);
    ch = fgetc(fp);
    printf("%c\n", ch);
  
  fseek(fp, -4, SEEK_END);
    ch = fgetc(fp);
    printf("%c\n", ch);
  return 0;
}