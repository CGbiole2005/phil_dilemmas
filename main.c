#include <stdio.h>

int main () {
  int grade;

Printf("Enter your grade: ");

scanf("%d", &grade);

if (grade < 0 || grade > 100) {
  printf("Invalid Grade");
}

Else if (grade >= 90) {
  printf("A");
}

Else if (grade >= 80) {
  printf("B");
}

Else if (grade >= 70) {
  printf("C");
}

Else if (grade >= 60) {
  printf("D");
}

else {
  printf("F");
}

return 0;
}
