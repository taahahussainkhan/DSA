#include<iostream>
using namespace std;
void reverse(char ch[],int n);
int getLength(char ch[]);
int main()
{
    char ch[20];
    cout << "Enter your name: " ;
    cin >> ch;
    cout << "Your name: " << ch << endl;
    cout << "Length: " << getLength(ch) << endl;
    reverse(ch,getLength(ch));
    return 0;
}
int getLength(char ch[])
{
    int length = 0;
    for (int  i = 0 ; ch[i] != '\0' ; i++)
        length++ ;
    return length;
}
void reverse(char ch[],int n)
{
    int start = 0 , end = n - 1;
    while(start < end)
    {
        swap(ch[start++] ,ch[end--]);
    }
    cout << "After Reverse: " << endl;
    cout << ch;
}