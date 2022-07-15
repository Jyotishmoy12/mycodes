#include <iostream>
using namespace std;
void rev(int arr[], int l, int h)
{
    if (h >= l)
    {
        return;
    }
    swap(arr[l], arr[h]);
    rev(arr, l - 1, h + 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 2};
    rev(arr, 4, 0);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
