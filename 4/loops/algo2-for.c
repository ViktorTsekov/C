#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
    We check if a string is a palindrome using for loop
*/

int main(int argc, char ** argv) {
  char * str = argv[1];
  int n = strlen(str) - 1;
  bool isPalindrome = true;

  for(int i = 0; i < strlen(str); i++) {

    if(str[i] != str[n]) {
        isPalindrome = false;
    }

    n--;
  }

  if(isPalindrome == true) {
    printf("palindrome\n");
  } else {
    printf("no palindrome\n");
  }

}
