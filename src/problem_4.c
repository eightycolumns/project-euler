#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

bool is_palindrome(int32_t d);
int32_t reverse(int32_t d);

int main(void) {
  int32_t answer = 0;

  for (int16_t i = 100; i < 1000; i += 1) {
    for (int16_t j = 100; j < 1000; j += 1) {
      int32_t product = i * j;

      if (is_palindrome(product) && product > answer) {
        answer = product;
      }
    }
  }

  printf("4) %" PRId32 "\n", answer);
}

bool is_palindrome(int32_t d) {
  return d == reverse(d);
}

int32_t reverse(int32_t d) {
  int32_t reverse = 0;

  while (d > 0) {
    reverse = reverse * 10 + d % 10;
    d /= 10;
  }

  return reverse;
}
