#include <iostream>
#include <string>
using namespace std;
string decToBin(int x){
    int rem=0;
    string ans="";
    while(x>0){
        rem=x%2;
        ans=to_string(rem)+ans;
        x/=2;
    }
    return ans;
}

int main(){
    int decNum;
    cout<<"Convert Decimal Number To Binary Number"<<endl;
    cout<<"Enter Decimal Number"<<endl;
    cin>>decNum;
    cout<<decToBin(decNum)<<endl;

    return 0;

}