#include <iostream>
using namespace std;
int main(){
   cout<<"Enter n"<<endl;
   cin>>int n>>endl;
   for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    for(int j=2*(n-1);j>2*i;j--){
        cout<<" ";
    }
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
   }
   for(int i=n;i>0;i--){
    for(int j=i;j>0;j--){
        cout<<"*";
    }
    for(int j=2*(n-i);j>0;j--){
        cout<<" ";
    }
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    
    cout<<endl;

   }
   cout<<endl;
    return 0;
}
