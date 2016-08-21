#include <inttypes.h>
#include <stdio.h>

int main(void) {
  int32_t answer = 0;

  int8_t common_difference = 3;
  int16_t n = 999 / common_difference;
  int8_t first_term = common_difference;
  int16_t nth_term = first_term + (n - 1) * common_difference;
  answer += n * (first_term + nth_term) / 2;

  common_difference = 5;
  n = 999 / common_difference;
  first_term = common_difference;
  nth_term = first_term + (n - 1) * common_difference;
  answer += n * (first_term + nth_term) / 2;

  common_difference = 15;
  n = 999 / common_difference;
  first_term = common_difference;
  nth_term = first_term + (n - 1) * common_difference;
  answer -= n * (first_term + nth_term) / 2;

  printf("1) %" PRId32 "\n", answer);
}
