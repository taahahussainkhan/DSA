#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 3, 2, 8, 4};
    cout <<"Accessing Elements: " << endl ;
    cout << "arr.at(4): " << arr.at(4) << endl;
    cout << "arr[4]: " << arr[4] << endl;
    cout << "arr.front(): " << arr.front() << endl;
    cout << "arr.back(): " << arr.back() << endl;

    cout <<"Iterating:" << endl ;
    
}