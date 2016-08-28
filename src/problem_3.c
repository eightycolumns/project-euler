#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

bool is_divisible_by(int64_t a, int16_t b);

int main(void) {
  int64_t number = 600851475143;
  int16_t factor = 2;

  while (number > 1) {
    while (is_divisible_by(number, factor)) {
      number /= factor;
    }

    factor += 1;
  }

  int16_t answer = factor - 1;

  printf("3) %" PRId16 "\n", answer);
}

bool is_divisible_by(int64_t a, int16_t b) {
  return a % b == 0;
}
