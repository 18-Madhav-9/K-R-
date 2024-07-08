/*
* program to print all input lines which are longer than 80 characters
*/

#include <stdio.h>

#define MAXLINE 1000

int get_line(char string[] , int maxlines ) ;


int main()
{
    int len ;
    char line[MAXLINE] ;
    while ( (len = get_line(line,MAXLINE)) > 0 )
    {
        if (len > 80)
            printf("%s" ,line);
    }
    return 0 ;
}

int get_line(char string[] , int maxlines )
{
    int c , i  ;

    for (i = 0 ; (i<maxlines-1) && ((c=getchar())!=EOF) && (c!='\n') ; ++i )
    {
        string[i] = c ;

    }
    if (c == '\n')
    {
        string[i] = c ;
        ++i;
    }
    string[i] = '\0';
    return i ;
}
