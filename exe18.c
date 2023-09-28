#include <ctype.h>
#include <stdio.h>
#include <string.h>

int inv(char s[100], int p, int u) {
  if (p >= u)
    return 0;

  if (!isalpha(toupper(s[p])))
    p++;
  if (!isalpha(toupper(s[u])))
    u--;

  if (toupper(s[p]) == toupper(s[u]))
    return inv(s, p + 1, u - 1) + 0;
  else
    return inv(s, p + 1, u - 1) + 1;
}

int main(void) {
  char s[100] = "A base do teto desaba";

  if (inv(s, 0, strlen(s) -1) == 0)
    printf("A frase '%s' e palindroma.", s);
  else
    printf("A frase '%s' nao e palindroma.", s);
  return 0;
}