#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
    We check if a string is a palindrome using goto loop
*/

int main(int argc, char ** argv) {
  char * str = argv[1];
  int n = strlen(str) - 1;
  int i = 0;
  bool isPalindrome = true;

  loop: ;
  if(str[i] != str[n]) {
      isPalindrome = false;
  } else if(str[i] == str[n] && n != 0) {
    i++;
    n--;
    goto loop;
  }

  if(isPalindrome == true) {
    printf("palindrome\n");
  } else {
    printf("no palindrome\n");
  }

}
