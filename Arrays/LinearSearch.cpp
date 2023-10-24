//Linear Search  --> Search an element in an sequential way.

#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){

            return 1; // Returns true means we found the number.
        }
    }
    return 0; // Return false means not found the number.
}


int main(){
    int arr[10] = {1,4,6,34,-99,34,25,67,82,54};
    cout<<"Enter the element to be search"<<endl;

    int key;
    cin>> key;

    bool found = search(arr, 10, key);
    if(found){
        cout<<"Key is Present"<<endl;
    }else{
        cout<<"Key is not Present"<<endl;
    }
    return 0;
}