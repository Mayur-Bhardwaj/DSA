#include<iostream>
using namespace std;

int main(){
int a,b;

cout<<"Enter the value of a : "<<endl;
cin>>a;
cout<<"Enter the value of b : "<<endl;
cin>>b;

char op ;
cout<<"Enter the operation that you want to perform : " <<endl;
cin>>op;

switch ( op )
{
case '+':
    cout<<"The Addition of two number is : "<<a+b<< endl;
    break;
case '-':
    cout<<"The Addition of two number is : "<<a-b<< endl;
    break;
case '*':
    cout<<"The Addition of two number is : "<<a*b<< endl;
    break;
case '/':
    cout<<"The Addition of two number is : "<<a/b<< endl;
    break;
case '%':
    cout<<"The Addition of two number is : "<<a%b<< endl;
    break;

default:        cout<<"You Enter Wrong Numbrer Plz ReEnter";
    break;
}
}