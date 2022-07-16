#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int first= f(n - 1);
    int second= f(n - 2);
    return first+second;
}
int main()
{
    int n = 9;
    cout << f(9) << endl;
    return 0;
}
