#include<iostream>
using namespace std;

int getMax(int num[], int n){

    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        if(num[i]> max)
         max=num[i];
    }
         //returning maximum value
         return max; 
}
int getMin(int num[], int n){
    
    int min = INT_MAX;
    for (int i = 0; i<n; i++){
        if(num[i]<min){
         min = num[i];
    }
    }
    //returning minimum value
    return min;
}

int main(){
    int size;
    cin>> size;
    int num[100];

    //talong input from array

    for(int i = 0; i< size; i++){
        cin>> num[i];
    }
    cout<<"The Maximum Value is : " << getMax(num, size) <<endl;
    cout<<"The Minimum  Value is : " << getMin(num, size) <<endl;
}