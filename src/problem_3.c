#include <inttypes.h>
#include <stdio.h>

int main(void) {
  int64_t number = 600851475143;
  int16_t factor = 2;

  while (number > 1) {
    while (number % factor == 0) {
      number /= factor;
    }

    factor += 1;
  }

  int16_t answer = factor - 1;

  printf("3) %" PRId16 "\n", answer);
}
