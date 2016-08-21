#include <inttypes.h>
#include <stdio.h>

int32_t sum_of_multiples_of(int8_t common_difference);

int main(void) {
  int32_t answer = 0;

  answer += sum_of_multiples_of(3);

  answer += sum_of_multiples_of(5);

  answer -= sum_of_multiples_of(15);

  printf("1) %" PRId32 "\n", answer);
}

int32_t sum_of_multiples_of(int8_t common_difference) {
  int16_t n = 999 / common_difference;
  int8_t first_term = common_difference;
  int16_t nth_term = first_term + (n - 1) * common_difference;
  int32_t nth_partial_sum = n * (first_term + nth_term) / 2;
  return nth_partial_sum;
}
