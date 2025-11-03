#include <stdio.h>
int main() {
  int num = 153, sum = 0, temp = num;
  while (temp != 0) {
    int digit = temp % 10;
    sum += digit * digit * digit;
    temp /= 10;
  }
  if (sum == num)
    printf("Armstrong\n");
  else
    printf("Not Armstrong\n");
  return 0;
}
