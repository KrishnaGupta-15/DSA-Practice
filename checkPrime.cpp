#include <iostream>
#include <cmath>
using namespace std;
bool checkPrime(int x){
    if(x<=1){
        return false;
    }
    
    for (int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;
            
        }
   
    } return true;
}
int main(){
    int num;
    cout<<"Check Prime Number"<<endl;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(checkPrime(num)){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
    return 0;

}