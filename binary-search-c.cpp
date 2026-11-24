
#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int key, low, high, mid;
    int found = 0;

    printf("Enter number to search: ");
    scanf("%d", &key);

    low = 0;
    high = 4;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("Element not found");
    }

    return 0;
}

