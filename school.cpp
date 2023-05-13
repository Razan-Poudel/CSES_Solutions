#include <stdio.h>
#include <string.h>
int main() {
	
//to check whether a string is palindrome or not
  int size;
  char str[100];
  char strcmpre[100];
  printf("Enter size the string(size less than 100):");
  scanf("%d", &size);
  printf("Enter the string:");
  scanf("%s", str);
  puts(str);
  for (int i = 0; i < size; i++) {
    strcmpre[size - i - 1] = str[i];
  }
  if (strcmp(str, strcmpre) == 0) {
    printf("It is palindrome");
  } else {
    printf("It is not palindrome");
  }
  return 0;
}
