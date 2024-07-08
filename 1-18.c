/*
* program to remove the trailing blanks and tabs
* from each line of input and delete entirely blank lines
*/

#include <stdio.h>

#define MAXLINE 1000

int get_line(char string[] , int maxline );
int  remove_trail( char string[] ) ;

int main()
{
    int len ;
    char line[MAXLINE] ;
    while ((len = get_line(line,MAXLINE)) > 0)
    {
        if (remove_trail(line) > 0 )
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

int remove_trail(char string[] )
{
    int i ;
    for (i = 0 ; string[i] != '\n' ; ++i );
    --i ;
    for ( i>0 ; string[i] == ' ' || string[i] == '\t' ; --i );
    if ( i >0 )
    {
        ++i ;
        string[i] = '\n';
        ++i ;
        string[i] = '\0';
    }
    return i ;

}
