#include<bits/stdc++.h>
using namespace std;

int unique(int arr[],int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
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

    cout<<"the unique element is "<< unique(arr,n) <<endl;

}