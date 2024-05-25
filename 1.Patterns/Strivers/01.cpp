#include<iostream>
using namespace std;
void pattern1(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern2(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern3(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern4(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern5(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = n ; j >= i ; j--)
        {
            cout << " *";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern6(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = n ; j >= i  ; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern7(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = n ; j >= i  ; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern8(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        //Space
        for (int j = 0; j < n-i-1; j++)
        {
            cout<< "  ";
        }
        //Star
        for (int k = 0; k < (2*i+1); k++)
        {
            cout<< " *";
        }
        //Space
        for (int l = 0; l < n-i-1; l++)
        {
            cout<< "  ";
        }        
        cout << endl;
    }
    cout << endl;
}
void pattern9(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        //Space
        for (int j = 1; j <= i; j++)
        {
            cout<< "  ";
        }
        //Star
        // n = 5
        for (int k = n+(n-i); k >= i  ; k--)
        {
            cout<< " *";
        }
        //Space
        for (int l = 1; l <= i; l++)
        {
            cout<< " ";

        }        
        cout << endl;
    }
    cout << endl;
}
void pattern10(int n){
    for(int i = 0 ; i < n ; i++)
    {
        //Space
        for (int j = 0; j < n-i-1; j++)
        {
            cout<< "  ";
        }
        //Star
        for (int k = 0; k < (2*i+1); k++)
        {
            cout<< " *";
        }
        //Space
        for (int l = 0; l <= n-i-1; l++)
        {
            cout<< "  ";
        }        
        cout << endl;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        //Space
        for (int j = 1; j <= i; j++)
        {
            cout<<"  ";
        }
        //Star
        // n = 5
        for (int k = n+(n-i); k >= i  ; k--)
        {
            cout<< " *";
        }
        //Space
        for (int l = 1; l <= i; l++)
        {
            cout<< "  ";

        }        
        cout << endl;
    }
    cout << endl;
}
void pattern11(int n){
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if(i > n) stars = 2*n-i; 
        
            for (int k = 1; k <= stars; k++)
            {
                cout<< " *";
            }
            cout << endl;
       
    }
    
}

int main()
{
    int n = 5;
  
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    pattern11(n);

}