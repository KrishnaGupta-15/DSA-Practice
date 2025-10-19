#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;

        if(sum%2==0){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
    }
    return 0;
}