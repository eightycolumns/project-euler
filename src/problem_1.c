#include <inttypes.h>
#include <stdio.h>

int main(void) {
  int32_t answer = 0;

  int16_t n = 999 / 3;
  answer += n * (3 + 3 + (n - 1) * 3) / 2;

  n = 999 / 5;
  answer += n * (5 + 5 + (n - 1) * 5) / 2;

  n = 999 / 15;
  answer -= n * (15 + 15 + (n - 1) * 15) / 2;

  printf("1) %" PRId32 "\n", answer);
}
