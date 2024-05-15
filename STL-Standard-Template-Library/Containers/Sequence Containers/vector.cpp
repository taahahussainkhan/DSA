#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {6,8,1,7,9};
    cout<<"Size of vector: "<<vec.size()<<endl;
    cout<<"Capacity of vector: "<<vec.capacity()<<endl;
    cout<<"Max_Size of vector: "<<vec.max_size()<<endl;
    cout<<"Front of vector: "<<vec.front()<<endl;
    cout<<"Back of vector: "<<vec.back()<<endl;
    cout<<"Data of vector: "<<vec.data()<<endl;
    cout<<"Empty of vector: "<<vec.empty()<<endl;
    cout<<"Element at 2nd position: "<<vec.at(2)<<endl;
    cout<<"Element at 2nd position: "<<vec[2]<<endl;
    cout<<"Element at 2nd position: "<<vec.operator[](2)<<endl;
    vec.push_back(10); // Inserting element at the end
    for(auto i:vec)
        cout<<i<<" ";
    vec.pop_back(); // Deleting element from the end
    cout<<endl;
    for(auto i:vec)
        cout<<i<<" ";
}