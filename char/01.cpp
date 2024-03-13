#include<iostream>
using namespace std;
int main()
{
    char ch[20];
    cout << "Enter your name: ";
    cin >> ch;
    cout <<"Your name: " << ch << endl;
    for (int i = 0; ch[i] !='\0'; i++)
    {
        /* code */
        cout <<ch[i] << " ";
    }
    
}