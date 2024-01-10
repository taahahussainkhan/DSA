#include<iostream>
using namespace std;
int main()
{
    int r = 0 , c = 0, i = 1 ,j;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    while ( i <= r) //Rows
    {
        j = 1 ; 
        while (j <= c){ //Columns
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
}