#include <stdio.h>
#include <string.h>
 
int main() {
  int n;
  scanf("%d", &n);
  char x[101];
  for (int i = 0; i < n; i++) {
    scanf("%s", x);
    if (strlen(x) <= 10) {
      puts(x);
    } else {
      printf("%c%d%c\n", x[0], strlen(x) - 2, x[strlen(x) - 1]);
    }
  }
  return 0;
}