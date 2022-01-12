#include <stdio.h>

int main(void) {
  float m = 0;float kg = 0;float result = 0;

  printf("키를 입력해주세요 : ");
  scanf("%f", &m);
  m = m / 100;
  printf("몸무게를 입력해주세요 : ");
  scanf("%f", &kg);

  result = kg / (m * m);

  printf("BMI 지수 : %f ", result);
}
