/* Program to print the following pattern:
   ...........
   ...........
   1 1 1 1 1
   2 2 2 2
   3 3 3
   4 4
   5
*/

#include<iostream>
using namespace std;

int main()
{
    int rows, count=1;
    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i=rows; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<count<<" ";
        }
        count++;
        cout<<endl;
    }

    // for(int i=1; i<=rows; i++)
    // {
    //     for(int j=i; j<=rows; j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }
}