#include<iostream>
using namespace std;

int main()
{
    // int a;
    // cin>>a;

    // if(a>0){
    //     cout<<"A is positive number.";
    // }
    // return 0;

    // int a,b;
    // cin>> a>> b;
    // cout<<"The value of A and B is : " << endl;

    // Find Positive, Negative and Zero.

    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    if(a>0){
        cout<<"The number is Positive" <<endl;
    }else if(a<0){
        cout<<"The given number is negative" <<endl;
    }else{
        cout<<"The given number is zero.";
    }
}