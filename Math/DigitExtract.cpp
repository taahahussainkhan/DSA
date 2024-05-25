#include<iostream>
using namespace std;
int main()
{
    int num ,i=0,count = 0, nums[100];
     cout << "Enter a number: ";
     cin >> num;
    while(num > 0)    {
        nums[i] = num % 10;
        num = num/10;
        i++;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        cout << nums[i] << endl;
    }
    cout << "\n No of digits : " << count << endl;
    num = 0;
    for(int i = 0 ;i<count;i++)
    {
       num = num * 10;
        num = num + nums[i];
    }
    cout << "\n"<<num << endl;
}