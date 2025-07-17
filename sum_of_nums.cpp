#include<iostream>
using namespace std;

int main(){
   
   int n,sum = 0;
   cout<<"Enter a Positive number : ";
   cin>>n;
   
   for(int i = 0;i<=n;i++){
       sum += i;
   }
   cout<<"Sum of first "<<n<<" Natural number is : "<<sum;
   return 0;
}
