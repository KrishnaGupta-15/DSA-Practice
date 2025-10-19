#include <iostream>
#include <climits>
using namespace std;
int linearSearch(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int smallestInArray(int arr[], int size){
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i] < smallest){
            smallest=arr[i];
        }
    }
    return smallest;
}
int largestInArray(int arr[], int size){
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int sumArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int productArray(int arr[], int size){
    int pro=1;
    for(int i=0;i<size;i++){
        pro*=arr[i];
    }
    return pro;
}
int smallestArrIndex(int arr[],int size){
    int smallest = INT_MAX;
    int index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            index=i;
            smallest=arr[i];
        }
    }
    return index;
}
int largestArrIndex(int arr[],int size){
    int largest = INT_MIN;
    int index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            index=i;
            largest=arr[i];
        }
    }
    return index;
}
void swapMaxMin(int arr[],int size){
    int sIndex=smallestArrIndex(arr,size);
    int lIndex=largestArrIndex(arr,size);
    swap(arr[sIndex],arr[lIndex]);
}
void printUnique(int arr[],int size){
    
    for(int i=0;i<size;i++){
        bool isUnique=true;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                isUnique=false;
                break;
            }
        }
        if(isUnique){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;

}
void intersectionArr(int arr1[],int arr2[],int size1 , int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    cout<<endl;
}
int main(){
    int givenArray[]={1,2,3,4,1,5,0,12,12};
    int givenArray2[]={2,5,9,3,7};
    int size=sizeof(givenArray)/sizeof(int);
    int size2= sizeof(givenArray2)/sizeof(int);
    int target=2;
    cout<< "Smallest in Array "<<smallestInArray(givenArray,size)<<endl;
    cout<<"Largest in Array "<<largestInArray(givenArray,size)<<endl;
    cout<<"Target index "<<linearSearch(givenArray,size,target)<<endl;
    printArray(givenArray,size);
    reverseArray(givenArray,size);
    printArray(givenArray,size);
    cout<<"Sum of Array "<<sumArray(givenArray,size)<<endl;
    cout<<"Product of Array "<<productArray(givenArray,size)<<endl;
    cout<<"Before Swapping "<<endl;
    printArray(givenArray,size);
    swapMaxMin(givenArray,size);
    cout<<"After Swapping "<<endl;  
    printArray(givenArray,size);
    intersectionArr(givenArray,givenArray2,size,size2);
    printUnique(givenArray,size);
    return 0;
}