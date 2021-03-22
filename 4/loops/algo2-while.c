#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
    We check if a string is a palindrome by using while loop
*/

int main(int argc, char ** argv) {
  char * str = argv[1];
  int n = strlen(str) - 1;
  int i = 0;
  bool isPalindrome = true;

  while(n != 0) {

    if(str[i] != str[n]) {
        isPalindrome = false;
    }

    i++;
    n--;
  }

  if(isPalindrome == true) {
    printf("palindrome\n");
  } else {
    printf("no palindrome\n");
  }

}
