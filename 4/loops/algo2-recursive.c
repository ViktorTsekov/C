#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
    We check if a string is a palindrome by using the recursive function @palindromRec(char * str, int n, int i)
    We do it by comparing each corresponding letter from the back and the beggining of the word
*/

bool palindromRec(char * str, int n, int i) {

  if(str[i] != str[n]) {
    return false;
  } else if(str[i] == str[n] && n != 0) {
    palindromRec(str, n - 1, i + 1);
  }

  return true;
}

int main(int argc, char ** argv) {
  char * str = argv[1];
  int n = strlen(str) - 1;
  bool isPalindrome = palindromRec(str, n, 0);

  if(isPalindrome == true) {
    printf("palindrome\n");
  } else {
    printf("no palindrome\n");
  }

}
