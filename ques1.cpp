// Take 10 integer inputs from user and store them in an array and print them on screen.
#include<iostream>
using namespace std;
int main()
{   int array[10];
cout<<"Enter the elements in an array";
for(int i=0;i<10;i++)
cin>>array[i];
for(int i=0;i<10;i++)
cout<<array[i]<<" ";
    return 0;
}