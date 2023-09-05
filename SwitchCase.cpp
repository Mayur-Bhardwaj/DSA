#include<iostream>
using namespace std;

int main(){
    // int n =2;
    // cin>>n;

    // switch (n)
    // {
    // case 1:
    //     cout<<"First"<<endl;
    //     break;
    // case 2:
    //   cout<<"Second"<<endl;
    //   break;
    // default:
    //     cout<<"This is default case.";
    // }

    // char ch = '1';

    // switch (ch)
    // {
    // case 1:
    //     cout<<"This is first case."<<endl;
    //     break;
    // case '1':
    //     cout<<"This is Character."<<endl;
    //     break;
    // default:
    //     cout<<"This is default case.";
    // }

    // Nested Switch Case.

    int num = 1;
    char ch = '1';

    switch (ch)
    {
    case 1:
        cout<<"This is first case.";
        break;
    case '1':
        switch (num)
        {
        case 1:
            cout<<"The value of number is : "<<num << endl;
            break;
        
        default:    cout<<"This is default case."<< endl;
            break;
        }
    default:        cout<<"This is default case."<<endl;
        break;
    }
}