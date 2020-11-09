#include <stdio.h>
#include <errno.h>
  int main () {     
  FILE *file;
  struct filik {
    char name[20];
  };
  struct filik filika[10];
    char i=0;
    int k = 1; 
    if ((file = fopen("tekst.txt", "r")) != NULL) {
      while (fscanf (file, "%s\n", filika[i].name) != EOF) {
        printf("%d: %s\n", k, filika[i].name);
        i++;
        k++;
      }
    } else {
      printf ("Error of open file: %s\n", strerror(errno));
    }
}
