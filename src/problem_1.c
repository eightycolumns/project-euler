#include <inttypes.h>
#include <stdio.h>

int main(void) {
  int32_t answer = 0;

  int16_t n = 999 / 3;
  int8_t first_term = 3;
  int16_t nth_term = first_term + (n - 1) * 3;
  answer += n * (first_term + nth_term) / 2;

  n = 999 / 5;
  first_term = 5;
  nth_term = first_term + (n - 1) * 5;
  answer += n * (first_term + nth_term) / 2;

  n = 999 / 15;
  first_term = 15;
  nth_term = first_term + (n - 1) * 15;
  answer -= n * (first_term + nth_term) / 2;

  printf("1) %" PRId32 "\n", answer);
}
