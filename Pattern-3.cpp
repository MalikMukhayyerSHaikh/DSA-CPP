/*
Print the following pattern:
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/


/*The following pattern is generalized to work with any number of rows and columns, provided that the number of rows and columns are equal.*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    } 
}