#include <stdio.h>
void func() {
  static int arr[3];
  int i;
  for (i = 0; i < 3; i++) {
    arr[i] += 1;
    printf("%d ", arr[i]);
  }
}
int main() {
  func(); // Output: 1 1 1
  func(); // Output: 2 2 2
  func(); // Output: 3 3 3
  return 0;
}