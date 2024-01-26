#include <iostream>
using namespace std;
int main()
{
    int r, c, i = 1, j;
    cout << "Rows: ";
    cin >> r;
    cout << "Columns: ";
    cin >> c;
    while(i <= r){
        j = 1;
        while(j <= c){
            cout <<" " << c- j + 1<< " ";
            j++;
        }
        cout << endl;
        i++;
    }
}