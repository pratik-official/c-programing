#include <stdio.h>

int main()
{
    int arr[5] = {10, 25, 8, 40, 15};
    int max = arr[0];
    int i;

    for(i = 1; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Largest = %d", max);

    return 0;
}