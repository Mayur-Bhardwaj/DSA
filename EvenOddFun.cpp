#include<iostream>
using namespace std;

bool isEven(int a){
    //Even
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num =5;
    // cin >>num?;
    if(isEven(num)){
        cout<<"Number is Even" <<endl;
    }
    else{

        cout<<"Number is Odd" <<endl;
    }
    return 0;
}