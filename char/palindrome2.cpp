#include<iostream>
using namespace std;
int main()
{
    char ch[20];
    cout << "Enter: " ;
    cin >> ch;
    int n = 0;
    for(int i = 0 ; ch[i] != '\0' ; i++)
        n++;
    int start = 0 , end = n - 1;
    bool flag = 0;
    while (start <= end)
    {
        if(ch[start] != ch[end])
        {
           break;
        }
        else if(ch[start] == ch[end])
        {
            flag = 1 ;
            start++;
            end--;
        }
    }
    if(flag == 1)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
    return  0;
}
