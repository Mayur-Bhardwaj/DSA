#include<iostream>
using namespace std;

//1 -- Prime Number
//0 -- Not Prime Number

bool isPrime(int n){
    for(int i=2; i<n; i++){
        //Divide hogya, to not a prime no.
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if (isPrime(n) == 0)
    {
        cout<<"The Given Number is Prime Number";
    }else{
        cout<<"The Given Number is not a Prime Number";
    }
}