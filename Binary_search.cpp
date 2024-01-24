// ************************* Binary search ************************

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n,int key){
    int start=0;
    int end=n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
}
 
int main(){
    
    int arr[8]={2,4,6,9,13,25,50,69};

    int index = binarysearch(arr,8,50);
    cout<<"the Element present at index "<< index <<endl;
    
    return 0;
}