#include <stdio.h>

int main(void) {
  int a, b, sum;

  printf("请输入两个整数：");
  scanf("%d %d", &a, &b);

  sum = a + b;

  printf("%d + %d = %d\n", a, b, sum);

  return 0;
}
