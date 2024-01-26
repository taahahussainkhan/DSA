#include <iostream>
using namespace std;
int main()
{
    int r, i = 1, j;
    cout << "Rows: ";
    cin >> r;
    while(i <= r){
        j = 1;
        while(j <= i){
            cout <<" * ";
            j++;
        }
        cout << endl;
        i++;
    }
}