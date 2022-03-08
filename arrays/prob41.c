/*
41. Write a program in C to find the Floor and Ceil of the number 0 to 10 from a sroted array. Go to the editor
Expected Output :
The given array is : 1 3 5 7 8 9
Number: 0 ceiling is: 1 floor is: -1
Number: 1 ceiling is: 1 floor is: 1
Number: 2 ceiling is: 3 floor is: 1
Number: 3 ceiling is: 3 floor is: 3
Number: 4 ceiling is: 5 floor is: 3
Number: 5 ceiling is: 5 floor is: 5
Number: 6 ceiling is: 7 floor is: 5
Number: 7 ceiling is: 7 floor is: 7
Number: 8 ceiling is: 8 floor is: 8
Number: 9 ceiling is: 9 floor is: 9
Number: 10 ceiling is: -1 floor is: 9
*/

#include <stdio.h>

// using binary search in O(log(n))
int findCeil(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    int ceil = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return arr[mid];
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            ceil = arr[mid];
        }
    }
    return ceil;
}
int findFloor(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    int floor = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return arr[mid];
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
            floor = arr[mid];
        }
        else
        {
            high = mid - 1;
        }
    }
    return floor;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= 10; i++)
    {
        printf("ceil of %d is %d ", i, findCeil(arr, size, i));
        printf("floor of %d is %d \n", i, findFloor(arr, size, i));
    }

    return 0;
}

/*
// using linear search  in O(n)
#include <stdio.h>
int findCeil(int arr[], int size, int element)
{
    int ceiling = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            ceiling = arr[i];
            break;
        }
        // if greater found break loop
        if (arr[i] < element && arr[i + 1] > element)
        {
            ceiling = arr[i + 1];
            break;
        }
    }

    return ceiling;
}
int findFloor(int arr[], int size, int element)
{
    int floor = -1;
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == element)
        {
            floor = arr[i];
            break;
        }
        if (arr[i] == arr[size - 1])
        {
            floor = arr[size - 1];
        }

        // if greater found break loop
        if (arr[i] < element && arr[i + 1] > element)
        {
            floor = arr[i];
            break;
        }
    }

    return floor;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= 10; i++)
    {
        printf("Number: %d ceiling is: %d ", i, findCeil(arr, size, i));
        printf("floor is: %d \n", findFloor(arr, size, i));
    }

    return 0;
}
*/
