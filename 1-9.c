/*
* Program to change string of one or more blank space to single spaces
* example "hell   kerke r  eor  " to "hell kerke r eor "
*/

#include <stdio.h>

int main()
{
    int c ,last_c ;
    last_c = '\0' ;

    while ((c=getchar())!=EOF)
    {
        if ( c == ' ' )
        {
            if ( last_c != ' ' )
            {
                putchar(c) ;
            }
        }
        else
        {
            putchar(c);
        }
        last_c = c;
    }

    return 0;
}
