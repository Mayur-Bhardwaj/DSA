#include<iostream>
using namespace std;

void reverse(int arr[], int n){

    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//To Print An Array
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){

        cout<<arr[i]<<"";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {2,6,3,9,4};
    reverse(arr,5);
    printArray(arr,5);
    return  0;
}