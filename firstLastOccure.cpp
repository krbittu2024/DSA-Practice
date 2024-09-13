#include<iostream>
using namespace std;

int firstOccur(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return(arr,n,i+1,key);
}

int lastOccur(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray = lastOccur(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int arr[] = {4,2,3,5,4,2,7};
    cout<<firstOccur(arr,7,0,2)<<endl;
    cout<<lastOccur(arr,7,0,2)<<endl;
    return 0;
}