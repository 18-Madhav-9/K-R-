/*
* print a histogram of length of words of its input
*/

#include <stdio.h>

int main()
{
    int i ,c , nword ,enter_word , last_c ;
    int count_array[100] ;
    for (i = 0 ; i < 100 ;++i)
        count_array[i] =  0;

    last_c = ' ' ;
    nword = 0 ;
    enter_word = 0 ;
    while ( (c=getchar()) != EOF )
    {
        if ((last_c ==' ') || (last_c == '\t') || (last_c == '\n'))
        {
            if ((c !=' ') || (c != '\t') || (c != '\n'))
            {
                enter_word = 1 ;
                count_array[nword] += 1 ;
            }
        }
        else if ((c ==' ') || ( c== '\t') || (c == '\n'))
        {
            if (( last_c!=' ') || (last_c!= '\t') || (last_c != '\n'))
            {
                enter_word = 0 ;
                nword++ ;
            }
        }
        else if ( enter_word == 0 )
        {
            nword++ ;
        }
        else if ( enter_word == 1 )
        {
            count_array[nword] += 1;
        }

        last_c = c ;
    }

    i = 0 ;
    while (count_array[i] != 0 )
    {
        for ( int j = 0 ; j < count_array[i] ; ++j )
        {
            putchar('-');
        }
        putchar('\n');
        i++;
    }

    return 0 ;
}
