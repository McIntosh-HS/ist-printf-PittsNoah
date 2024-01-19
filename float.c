#include <stdio.h>

int main() {
  float subtotal;
  float tax;
  printf("What is the subtotal? ");
  scanf("%f", &subtotal);
  printf("tax?");
  scanf("%f" , &tax);
  printf("The final is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
