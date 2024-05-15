#include <iostream>
using namespace std;
int dcount(int n)
{
    if (n == 0)
    {
        cout << n << " ";
        return 0;
    }
    cout << n << " ";
    dcount(n - 1);
}
int acount(int n, int l)
{
    if (n == l || l < n) // Handling base case and edge case
    {
        cout << l << " ";
        return l;
    }
    cout << n << " ";
    acount(n + 1, l);
}
int main()
{
    int n, l;
    cout << "n: ";
    cin >> n;
    cout << "l: ";
    cin >> l;
    cout << "Ascending: \n";
    acount(n, l);
    cout << endl;
    cout << "Descending: \n";
    dcount(n);
}