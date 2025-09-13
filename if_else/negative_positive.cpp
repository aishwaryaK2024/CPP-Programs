#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    
    if(a>0){
        cout<<a<<" is Positive Number";
    }
    else if(a==0){
        cout<<"0";
    }
    else if(a<0){
        cout<<a<<" is Negative";
    }
    
    return 0;
}
