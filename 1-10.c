/*
* program to copy its input to output but change
*  blank space to \b , tab to \t and backlash to \\
*/

#include <stdio.h>

int main()
{
    int c ;
    while ((c = getchar() ) != EOF)
    {
        if ( c == ' ')
        {
            putchar('\\');
            putchar('b');
        }
        else if ( c== '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if ( c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(c);
    }
    return 0;
}
