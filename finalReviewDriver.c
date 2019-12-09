/**
* Parker Zach
* Final Review
*/

#include "finalReview.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {

  if(argc != 2) {
    return 1;
  }

  int numTokens;
  FILE *f = fopen(argv[1], "r");
  char buffer[1000];
  //reading the first
  fgets(buffer, 1000, f);
  int n = atoi(buffer);
  //setup your array to hold films:
  Film *films = (Film *) malloc(sizeof(Film) * n);
  for(int i = 0; i < n; i++) {
    fgets(buffer, 1000, f);
    char **tokens = split(buffer, ',', &numTokens);
    if(numTokens != 5) {
      return -1;
    }
    intitFilm(&films[i], tokens[0], tokens[1], atoi(tokens[3]), atof(tokens[4]));
  }

  qsort(films, sizeof(Film), cmpByTitle);
  qsort(films, sizeof(Film), cmpByDirectorYear);


}


//DAY 2 Review
