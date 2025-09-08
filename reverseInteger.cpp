#include <iostream>
using namespace std;
#include <string>

string revInt(int num){
    string ans="";

     if(num==0){
        return "0";
    }
    bool isNegative=num<0;
    if(isNegative){
        num=-num;
        ans+="-";
    }
    while(num>0){
        int rem=num%10;
        num/=10;
        ans+=to_string(rem);
    }
   
    return ans;
}
int main(){
    int num;
    cout<<"Enter an integer"<<endl;
    cin>>num;
    cout<<revInt(num)<<endl;

    return 0;
}