#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

bool is_divisible_by(int16_t a, int8_t b);

int main(void) {
  int32_t answer = 0;

  for (int16_t i = 0; i < 1000; i += 1) {
    if (is_divisible_by(i, 3) || is_divisible_by(i, 5)) {
      answer += i;
    }
  }

  printf("1) %" PRId32 "\n", answer);
}

bool is_divisible_by(int16_t a, int8_t b) {
  return a % b == 0;
}
