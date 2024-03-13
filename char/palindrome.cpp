#include <iostream>
using namespace std;
void palindrome(char ch[])
{
    int n = 0;
    char ch1[20];
    // ch1 = ch;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        ch1[i] = ch[i];
        n++;
    }
    cout << "ch: " << ch << endl;
    cout << "ch1: " << ch << endl;
    int start = 0, end = n - 1;
    while (start < end)
        swap(ch[start++], ch[end--]);
    // return ch;
    cout << "ch after reverse: " << ch << endl;
    int same = 0;
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == ch1[i])
            same++;
    }
    if (same == n)
        cout << "Palindrome!" << endl;
    else
        cout << "Not Palindrome!" << endl;
}
int main()
{
    char ch[20];
    cout << " Enter your name: ";
    cin >> ch;
    palindrome(ch);
}