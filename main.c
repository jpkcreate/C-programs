#include <stdio.h>

int main(void) {
 printf("===^^===\n");
  printf("Welcome to the Decimal to Hexadecimal Converter!\n");
  printf("Enter a number:\n");

  int the_number; // declares an integer variable

  scanf("%d", &the_number); ///accquires the user input

  printf("Decimal representaion:%9d\n", the_number);

  printf("Converted to hexadecimal: %9X\n", the_number);
printf("===^^===\n");
  return 0;
}