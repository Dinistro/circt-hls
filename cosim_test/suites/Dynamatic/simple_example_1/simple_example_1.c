#include "simple_example_1.h"
int simple_example_1(int a[100]) {
  int x = 0;
  for (int i = 0; i < 100; ++i) {
    x += a[i];
  }
  return x;
}
