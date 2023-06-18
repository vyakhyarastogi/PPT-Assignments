// C++ program to display "Hello World"

#include <iostream>
using namespace std;

void solve(int nums[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "[" << i << ", " << j << "]" << endl;
            }
            break;
        }
    }
}

int main()
{

    int nums[4] = {2, 7, 11, 15};
    int target = 13;

    int size = 4;

    solve(nums, target, size);

    return 0;
}
