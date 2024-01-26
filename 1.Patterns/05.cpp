#include <iostream>
using namespace std;
int main()
{
    int r, c, i = 1, j , k  = 0;
    cout << "Rows: ";
    cin >> r;
    cout << "Columns: ";
    cin >> c;
    while(i <= r){
        j = 1;
        while(j <= c){
            cout <<" " << k << " ";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}