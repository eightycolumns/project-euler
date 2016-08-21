#include <inttypes.h>
#include <stdio.h>

int main(void) {
  int32_t answer = 0;

  for (int16_t i = 0; i < 1000; i += 1) {
    if (i % 3 == 0 || i % 5 == 0) {
      answer += i;
    }
  }

  printf("1) %" PRId32 "\n", answer);
}
