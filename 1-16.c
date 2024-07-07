/*
* program to print the length of an arbitrarily long input line
* as much text as possible
*/

#include <stdio.h>

#define MAXLINE 1000

int get_line(char string[] , int maxlines) ;
void copy(char to[],char from[] ) ;

int main()
{
    int len ,max ;
    char string[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while ((len = get_line(string,MAXLINE)) > 0 )
    {
        if (len > max )
        {
            max = len ;
            copy(longest,string);
        }
    }
    if (max > 0 )
    {
        printf("Max length is  %d of line %s" , max,longest) ;
    }

    return 0 ;
}

int get_line(char string[] ,int maxline )
{
    int c , i;
    for (i = 0 ; (i<maxline-1) && ((c=getchar())!=EOF) && (c!='\n') ; ++i )
    {
        string[i] = c ;
    }
    if ( c == '\n')
    {
        string[i] = c ;
        ++i ;
    }
    else
    {
        // if the line is greater than max limit
        // we can only count the length
        while ( (c=getchar())!= EOF  && (c != '\n') )
        {
            ++i ;
        }
        if ( c == '\n')
        {
            string[i] = c ;
            ++i;
        }
    }
    string[i] = '\0' ;
    return i ;
}

void copy(char to[] , char from[] )
{
    int i ;
    i = 0 ;
    while ( (to[i] = from[i] ) != '\0' )
    {
       ++i;
    }
}
