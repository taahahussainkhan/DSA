#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 3, 2, 8, 4};
    cout << "Accessing Elements: " << endl;
    cout << "arr.at(4): " << arr.at(4) << endl;     // Access the element at the specified index with bounds checking.
    cout << "arr[4]: " << arr[4] << endl;           // Access the element at the specified index without bounds checking.
    cout << "arr.front(): " << arr.front() << endl; // Access the first element.
    cout << "arr.back(): " << arr.back() << endl;   // Access the last element.

    cout << "Iterating:" << endl;
    cout << "arr.data(): " << *arr.data() << endl;      // Direct access to the underlying array.
    cout << "arr.begin(): " << *arr.begin() << endl;    // Direct access to the underlying array.
    for (auto it = arr.begin(); it != arr.end(); ++it) // Iterate over the array.
        cout << *it << " ";
    cout << endl;
    cout << "arr.rbegin(): " << *arr.rbegin() << endl;    // Direct access to the underlying array in reverse order.
   
    for (auto it = arr.rbegin(); it != arr.rend(); ++it) // Iterate over the array in reverse order.
        cout << *it << " ";
    cout << endl;
    cout << "arr.cbegin(): " << *arr.cbegin() << endl;    // Direct access to the underlying array.
    for (const auto &n : arr) // Range-based for loop to iterate over the array.
        cout << n << " ";
    
}