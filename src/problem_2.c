#include <inttypes.h>
#include <stdio.h>

int main(void) {
  int32_t answer = 0;

  int32_t previous = 0;
  int32_t current = 1;

  while (current <= 4000000) {
    if (current % 2 == 0) {
      answer += current;
    }

    int32_t next = current + previous;
    previous = current;
    current = next;
  }

  printf("2) %" PRId32 "\n", answer);
}
