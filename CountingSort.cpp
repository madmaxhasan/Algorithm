#include <stdio.h>
#include <string.h>
#define MAX 256

void counterSort(char arr[])
{
    int len = strlen(arr);
    char output[len];

    /* Create a counter array to store counter of individual
    characters and initialize counter array as 0 */

    int counter[MAX];
    memset(counter, 0, sizeof(counter));

    /* Store counter of each character in counter array */

    for(int i=0; arr[i]; i++)
    {
        counter[arr[i]]++;
    }

    /*Modify the count array such that each element at each index
    stores the sum of previous counts.*/

    for(int i=1; i<=MAX; i++)
    {
        counter[i] = counter[i] + counter[i-1];
    }

    /* Build the output character array */

    for(int i=0; arr[i]; ++i)
    {
        int index = counter[arr[i]] - 1;
        output[index] = arr[i];
        counter[arr[i]]--;
    }
    output[len] = '\0';

    /*Copy Character from output array into input arr*/

    for(int i=0; arr[i]; i++)
    {
        arr[i] = output[i];
    }
}

int main()
{
    char arr[] = "TINNI";
    counterSort(arr);
    printf("Sorted character array is: %s\n", arr);
    return 0;
}
