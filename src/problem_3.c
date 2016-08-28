#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

bool is_divisible_by(int64_t a, int16_t b);

int main(void) {
  int16_t answer = 1;

  int64_t number = 600851475143;
  int16_t factor = 2;

  if (is_divisible_by(number, factor)) {
    answer = factor;

    while (is_divisible_by(number, factor)) {
      number /= factor;
    }
  }

  factor = 3;

  while (number > 1) {
    if (is_divisible_by(number, factor)) {
      answer = factor;

      while (is_divisible_by(number, factor)) {
        number /= factor;
      }
    }

    factor += 2;
  }

  printf("3) %" PRId16 "\n", answer);
}

bool is_divisible_by(int64_t a, int16_t b) {
  return a % b == 0;
}
