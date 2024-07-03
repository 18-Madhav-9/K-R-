/*
* Program to verify that Evaluation of Expression
* getchar()!= EOF result in 0 or 1
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    int c;

    while ((c = getchar()) != EOF) {
        printf("%d ", c != EOF);
        putchar(c);
    }
}
