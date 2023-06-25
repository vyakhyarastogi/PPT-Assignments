#include <iostream>
using namespace std;

void zero(int arr[], int size)
{
    int i = 0;
    for (int j = 0; j < size; j++)
    {
        while (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {0, 1, 0, 2, 3};
    zero(arr, 5);
    print(arr, 5);
}