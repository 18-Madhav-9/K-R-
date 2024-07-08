/*
* write a function reverse() which
* reverses the character string
*/

#include <stdio.h>

#define MAXLINE 1000

int get_line(char string[] , int maxline );
void reverse(char string[]) ;

int main()
{
    int len ;
    char line[MAXLINE] ;
    while ((len = get_line(line,MAXLINE)) > 0)
    {
        reverse(line) ;
        printf("%s",line);
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

void reverse(char string[])
{
    int i,temp ,j ;
    for (i = 0; string[i] != '\n' ;++i ) ;

    j= 0 ;
    while(i >= 0)
    {
        temp = string[i] ;
        string[j] = temp ;
        ++j;
        --i ;
    }

}
