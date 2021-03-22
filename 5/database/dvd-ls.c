#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printAllRecords(FILE * file) {
  char line[225];

  rewind(file);

  while (fgets(line, sizeof(line), file) != NULL) {
      printf("%s", line);
  }

}

void printSingleRecord(FILE * file, int givenID) {
  char line[225];
  char lineCopy[225];
  int matchFound = 0;

  rewind(file);

  while (fgets(line, sizeof(line), file) != NULL) {
      char * ID;

      strcpy(lineCopy, line);
      ID = strtok(line, ",");

      if(givenID == atoi(ID)) {
        printf("%s", lineCopy);
        matchFound = 1;
      }

  }

  if(matchFound == 0) {
    printf("Invalid ID\n");
  }

}

int main(int argc, char ** argv) {
  FILE * fptr = fopen("dvd.dat", "r+");
  int ID;

  if(argc >= 2) {
    ID = atoi(argv[1]);
    printSingleRecord(fptr, ID);
  } else {
    printAllRecords(fptr);
  }

  fclose(fptr);
}
