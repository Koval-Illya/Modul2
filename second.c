#include <stdio.h>
int main()
{
    char str[80];

    int i = 0, flag = 1, count = 0;

    fputs("Enter a string: ", stdout);

    fgets(str, 80, stdin);

    while ( str[i] != '\0' )
    {
        if ( str[i] == ' ' || str[i] == '\t' || str[i] == '\n' )
        {
            flag = 1;
        }
        else if ( flag == 1 )
        {
            flag = 0;
            count++;
        }
        i++;
    }

    printf("Number of words: %d\n", count);

    return 0;
}