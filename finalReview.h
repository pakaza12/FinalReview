/**
* Parker Zach
* Final Review
*/

typedef struct {
  char * title;
  char * directorFirstName;
  char * directorLastName;
  int year;
  double rating;
} Film;

/**
* Utility funciton that splits a string into an array of strings
*
*/
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
              double rating);

char * filmToString(Film * f);

void printFilms(Film * f, int n)

nt cmpByTitle(const void * a, const void * b);

int cmpByDirectorYear(const void * a, const void * b)

//DAY 2 Review
