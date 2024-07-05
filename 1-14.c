/*
*  print a histogram of the frequency of different
*  characters in its input
*/

#include <stdio.h>

int main()
{
    int i,c ;
    int char_array[128] ;

    for (i = 0 ; i<128 ;++i)
    {
        char_array[i] = 0 ;
    }

    while ( (c=getchar()) != EOF )
    {
        char_array[c] +=  1 ;

    }

    for (i = 0; i < 128 ; ++i)
    {
        if (char_array[i] != 0)
        {
            putchar(i);
            for (int j = 0; j < char_array[i]; ++j)
                putchar('*');
            putchar('\n');
        }
    }

    return 0;
}
