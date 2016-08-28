#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

bool is_even(int64_t d);
bool is_divisible_by(int64_t a, int16_t b);

int main(void) {
  int16_t answer = 1;

  int64_t number = 600851475143;

  if (is_even(number)) {
    answer = 2;

    while (is_even(number)) {
      number /= 2;
    }
  }

  int16_t factor = 3;

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

bool is_even(int64_t d) {
  return d % 2 == 0;
}

bool is_divisible_by(int64_t a, int16_t b) {
  return a % b == 0;
}
