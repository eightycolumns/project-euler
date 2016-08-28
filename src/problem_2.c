#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

bool is_even(int32_t d);

int main(void) {
  int32_t answer = 0;

  int32_t previous = 0;
  int32_t current = 1;

  while (current <= 4000000) {
    if (is_even(current)) {
      answer += current;
    }

    int32_t next = current + previous;
    previous = current;
    current = next;
  }

  printf("2) %" PRId32 "\n", answer);
}

bool is_even(int32_t d) {
  return d % 2 == 0;
}
