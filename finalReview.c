/**
* Parker Zach
* Final Review
*/

#include "finalReview.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * deepCopy(const char *s);

char ** split(const char *str, char delimiter, int *n);

void freeStringArray(char **stringArray, int n);

int cmpInt(const void *a, const void *b);

int * getUniqueIntegers(const int *arr, int n, )

void initFilm(Film *f,
              char * title,
              char * directorFirstName,
              char * directorLastName,
              int year,
              double rating) {
  if(f == NULL) {
    return;
  }

  f->title = deepCopy(title);
  f->directorFirstName = deepCopy(directorFirstName);
  f->directorLastName = deepCopy(directorLastName);
  f->year = year;
  f->rating = rating;
  return;
}

char * filmToString(Film * f) {
  char buffer[1000];
  sprintf(buffer, "%s directed by %s, %s, (%d) %5.2f\n", f->title,
                                                         f->directorFirstName,
                                                         f->directorFirstName,
                                                         f->year,
                                                         f->rating);
 return deepCopy(buffer);
}

void printFilms(Film * f, int n) {
  for(int i=0; i<n; i++) {
    char *s = filmToString(&films[i]);
    printf("%s\n", s);
    free(s);
  }
}

int cmpByTitle(const void * a, const void * b) {
  const Film *x = (const Film *)a;
  const Film *y = (const Film *)b;
  return strcmp(x->title, y->title);
}

int cmpByDirectorYear(const void * a, const void * b) {
  const Film *x = (const Film *)a;
  const Film *y = (const Film *)b;

  int result = strcmp(x->directorLastName, y->directorLastName);
  if(strcmp(result == 0) {
    result = strcmp(x->directorFirstName, y->directorFirstName);
    if(result == 0) {
      return cmpInt(&(x->year), &(y->year));
    } else {
      return result;
    }
  } else {
    return result;
  }
}

int cmpByRating(const void * a, const void * b) {
  const Film *x = (const Film *)a;
  const Film *y = (const Film *)b;
  if(x->rating < y->rating) {
    return -1;
  } else if(x->rating > y->rating) {
    return 1;
  } else {
    return 0;
  }
}


//DAY 2 Review
