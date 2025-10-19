#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(int n){
    int orig=n;
    int revNum=0;
    int lastNum=0;
    while(n>0){
        lastNum=n%10;
        revNum=revNum*10 + lastNum;
        n/=10;
    };
    if(orig==revNum){
        return true;
    }else{
        return false;
    }
    return true;
};
int main(){
    int t;
    cout<<"Enter number of testcases";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter number";
        cin>>n;
        if(checkPalindrome(n)){
            cout<<"true"<<endl;
        }else{
            cout<<"false"<<endl;
        }
    }
    return 0;
}