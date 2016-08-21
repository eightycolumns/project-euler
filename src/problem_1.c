#include <inttypes.h>
#include <stdio.h>

int main(void) {
  int32_t answer = 0;

  answer += 999 / 3 * (3 + 3 + (999 / 3 - 1) * 3) / 2;
  answer += 999 / 5 * (5 + 5 + (999 / 5 - 1) * 5) / 2;

  answer -= 999 / 15 * (15 + 15 + (999 / 15 - 1) * 15) / 2;

  printf("1) %" PRId32 "\n", answer);
}
