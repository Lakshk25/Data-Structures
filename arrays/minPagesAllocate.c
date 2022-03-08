/*
Given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.
*/

#include <stdio.h>

// check page distribution
int isTrue(int arr[], int student, int books, int minPages)
{
    int studentsReq = 1;
    int currentSum = 0;
    for (int i = 0; i < books; i++)
    {
        if (arr[i] > minPages)
            return 0;
        if (currentSum + arr[i] > minPages)
        {
            studentsReq++;
            currentSum = arr[i];
            if (studentsReq > student)
                return 0;
        }
        else
            currentSum += arr[i];
    }
    return 1;
}

// allocate pages to each
int allocatePages(int arr[], int books, int students)
{
    int result;
    int sum;
    int low = 0;
    if (students > books)
        return -1;

    for (int i = 0; i < books; i++)
        sum += arr[i];
    int high = sum;

    while (low <= high)
    {
        int minPages = (low + high) / 2;
        int check = isTrue(arr, students, books, minPages);
        if (check == 1)
        {
            result = minPages;
            high = minPages - 1;
        }
        else
            low = minPages + 1;
    }
    return result;
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int books = sizeof(arr) / sizeof(arr[0]);
    int students = 2;
    int pages = allocatePages(arr, books, students);
    printf("minimum pages allocated is %d", pages);
    return 0;
}
