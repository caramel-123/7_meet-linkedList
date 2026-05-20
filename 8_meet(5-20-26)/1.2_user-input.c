#include <stdio.h>

int main() {
  FILE *fp;
  fp = fopen("//Users//melfredbernabe//PROGRAMS_melfred//CPRO1-2//cpro1-2_c//8_meet//output//MyFamily.txt", "w");
  char name[15];

  printf("Enter name: ");
  scanf("%s", name);
  
  fprintf(fp, "%s\n", name);
  printf("Printed Succesfully Wohooo!");
  fclose(fp);

  return 0;
}