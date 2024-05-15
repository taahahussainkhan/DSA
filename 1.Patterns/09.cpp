#include <iostream>
using namespace std;
int main()
{
    int r, i = 1, j,k = 1;
    cout << "Rows: ";
    cin >> r;
    while(i <= r){
        j = 1;
        while(j <= i){
            cout <<" " << k << " ";
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
}