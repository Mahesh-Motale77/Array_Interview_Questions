#include<bits/stdc++.h>
using namespace std;

int swap(int arr[],int size){
    for(int i=0; i+1<size; i+=2){
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    int n;
    cout<<"enter size of array "<<endl;
    cin>>n;

    int arr[100];

    cout<<"enter element of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    swap(arr,n);

    cout<<"final element of array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}