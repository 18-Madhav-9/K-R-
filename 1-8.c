/*
* Program to print the count of blank,tabs and newline
*/

#include <stdio.h>

int main()
{
    int c;
    int blk_ct ,tb_ct ,nl_ct;
    //initializing the counting variables
    blk_ct = tb_ct = nl_ct ;
    while ((c=getchar())!=EOF)
    {
        if ( c == ' ' )
        {
            ++blk_ct ;
        }
        if ( c == '\t')
        {
            ++tb_ct ;
        }
        if ( c== '\n' )
        {
            ++nl_ct ;
        }
    }
    printf("Blankspace count = %d\nTab Count =%d\nNewline Count = %d",blk_ct,tb_ct,nl_ct);


    return 0;
}
