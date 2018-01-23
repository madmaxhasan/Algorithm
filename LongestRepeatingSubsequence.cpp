#include <stdio.h>
#include <string.h>

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int LRS(char *str)
{
    int N = strlen(str);

    /* Create Dynamic table and initialize 0*/

    int Dynamic[N+1][N+1];

    for(int i=0; i<=N; i++)
    {
        for(int j=0; j<=N; j++)
        {
            Dynamic[i][j] = 0;
        }
    }

    /*Fill Dynamic table (similar to LCS loops)*/

    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            /* If characters match and indexes are not same */

            if(str[i-1] == str[j-1] && i != j)
            {
                Dynamic[i][j] =  1 + Dynamic[i-1][j-1];
            }

            /* If characters do not match */

            else
            {
                Dynamic[i][j] = maximum(Dynamic[i][j-1], Dynamic[i-1][j]);
            }
        }
    }

    printf("\nLRS TABLE\n\n");

    for(int i=0; i<=N; i++)
    {
        for(int j=0; j<=N; j++)
        {
            printf("%d ",Dynamic[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return Dynamic[N][N];
}

int main()
{
    char str[100];

    scanf("%s",str);

    printf("The length of the largest subsequence that repeats itself is %d\n",LRS(str));

    return 0;
}
