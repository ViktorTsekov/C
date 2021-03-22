#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void encode(char* src)
{
    int rLen;
    int len = strlen(src);
    int j = 0;
    int k;
    char count[50];
    char* dest = (char*)malloc(sizeof(char) * (len * 2 + 1));

    for (int i = 0; i < len; i++) {
        dest[j++] = src[i];

        rLen = 0;
        while (i + 1 < len && src[i] == src[i + 1] && rLen != 9) {
            rLen++;
            i++;
        }

        sprintf(count, "%d", rLen);

        for (k = 0; *(count + k); k++, j++) {
            dest[j] = count[k];
        }

    }

    dest[j] = '\0';
    printf("%s\n", dest);
}

void decode(char* src) {
    int len = strlen(src);
    int durationOfPrinting;
    char elementToPrint;

    for (int i = 0; i < len; i += 2) {
        elementToPrint = src[i];
        durationOfPrinting = src[i + 1] - '0';

        for(int j = 0; j <= durationOfPrinting; j++) {
          printf("%c", elementToPrint);
        }

    }

}

int checkForErrors(char* src) {
  int len = strlen(src);

  if(len % 2 != 0) {
    return 1;
  }

  for (int i = 0; i < len; i += 2) {

      if(isalpha(src[i + 1])) {
        return 1;
      }

  }

  return 0;
}

void operationManager(char* op, char* inp, int error) {

  if(strcmp(op, "D") == 0) {

  	if(error == 0) {
  		decode(inp);
	} else {
		printf("Error: Invalid input\n");
	}

  } else if (strcmp(op, "E") == 0) {
    encode(inp);
  } else {
    printf("Error: Invalid input\n");
  }

}

int main(int argc, char ** argv) {
    char* operation;
    char* inp;
    int error;

    if(argc >= 3) {
      operation = argv[1];
      inp = argv[2];
      error = checkForErrors(inp);

      operationManager(operation, inp, error);
    } else {
      printf("Error: Invalid input\n");
    }

}
