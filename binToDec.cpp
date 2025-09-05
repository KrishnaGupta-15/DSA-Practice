#include <iostream>
using namespace std;
int binToDec(int binNum){
    
    int ans=0;
    int power=1;
    while(binNum>0){
        int rem=binNum%10;
        ans=ans+rem*power;
        power*=2;
        binNum/=10;

    }
    return ans;

}
bool checkBin(int binNum){
    bool binNumCheck=false;
    while(binNum>0){
        int rem=binNum%10;
        if(rem!=0 && rem!=1){
           return false;
            break;
            
        }
        binNum/=10;

    }
    return true;
}
int main(){
    int binNum;
    while(true){
        cout<<"Enter a binary number"<<endl;
    cin>>binNum;
   
    if(!checkBin(binNum)){
        cout<<"invalid enter binary number"<<endl;
        continue;
    }
    else{
        cout<<"Decimal number is"<<binToDec(binNum)<<endl;
        break;
    }
    return 0;
    }
}
