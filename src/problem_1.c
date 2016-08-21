#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

int32_t sum_of_multiples_of(int8_t common_difference);
int32_t nth_partial_sum(int16_t n, int8_t first_term, int16_t nth_term);
int8_t lcm(int8_t a, int8_t b);
int8_t max(int8_t a, int8_t b);
bool is_divisible_by(int8_t a, int8_t b);

int main(void) {
  int32_t answer = sum_of_multiples_of(3) + sum_of_multiples_of(5);

  answer -= sum_of_multiples_of(lcm(3, 5));

  printf("1) %" PRId32 "\n", answer);
}

int32_t sum_of_multiples_of(int8_t common_difference) {
  int16_t n = 999 / common_difference;
  int8_t first_term = common_difference;
  int16_t nth_term = first_term + (n - 1) * common_difference;

  return nth_partial_sum(n, first_term, nth_term);
}

int32_t nth_partial_sum(int16_t n, int8_t first_term, int16_t nth_term) {
  return n * (first_term + nth_term) / 2;
}

int8_t lcm(int8_t a, int8_t b) {
  int8_t step = max(a, b);

  int8_t lcm = step;

  while (true) {
    if (is_divisible_by(lcm, a) && is_divisible_by(lcm, b)) {
      break;
    }

    lcm += step;
  }

  return lcm;
}

int8_t max(int8_t a, int8_t b) {
  return (a > b) ? a : b;
}

bool is_divisible_by(int8_t a, int8_t b) {
  return a % b == 0;
}
