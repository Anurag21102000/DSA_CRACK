#include <iostream>
using namespace std;

int main()
{
    int nums[6] = {2, 0, 2, 1, 1, 0};
    int i = 0, mid = 0;
    int j = 5;  // Corrected the index of the last element

    for (int i = 0; i < 6; i++)
        cout << nums[i] << " ";
    cout << endl;

    while (mid <= j)
    {
        switch (nums[mid])
        {
            case 0:
                swap(nums[i++], nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid], nums[j--]);
                break;
        }
    }

    for (int i = 0; i < 6; i++)
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}
