// 1. While Loop

// Syntax:      while(condition){
// Statement
// }

#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     //print
    //     cout<<i;
    //     i = i+1;
    // }

    // Print Sum From 1 To N.

    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // int i =1;
    // int sum = 0;
    // while(i<=n){
    //     sum = sum + i;
    //     i = i + 1;
    // }
    // cout<<"The Sum is : "<< sum << endl;

    // H.W.    Find the sum of even number.

    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // int i = 2;
    // int sum = 0;
    // while(i<=n){
    //     sum = sum + i;
    //     i = i + 2;
    // }
    // cout<<"The Sum of Even number is : "<< sum;

    // Prime Number

    int n;
    cout << "Enter the number : ";
    cin >> n;
    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
            cout << "The Given Number is not Prime Number" << i << endl;
        else
            cout << "The Given Number is Prime Number" << i << endl;
        
        i = i + 1;
    }
}
