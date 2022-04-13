#include <iostream>
#include <stack>
using namespace std;
int water(int arr[], int size)
{
    int maxRight[size];
    int maxLeft[size];
    int water[size];
    maxRight[size - 1] = arr[size - 1];
    maxLeft[0] = arr[0];
    int temp = arr[0];
    for (int i = 1; i < size; i++)
    {
        maxLeft[i] = max(temp, arr[i]);
    }
    temp = arr[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        maxRight[i] = max(temp, arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        water[i] = min(maxRight[i], maxLeft[i]) - arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + water[i];
    }
    cout << "total rainwater collected -> " << sum << endl;
}
int main()
{
    int arr[] = {3, 0, 0, 2, 0, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    water(arr, size);
    return 0;
}
