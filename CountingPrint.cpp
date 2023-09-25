// Print the counting till the number is given by user.

#include<iostream>
using namespace std;

void printCounting(int n){ //This is used when function cannot return anything.
    for(int i=1; i<=n; i++)
    {
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printCounting(n);
    return 0;
}