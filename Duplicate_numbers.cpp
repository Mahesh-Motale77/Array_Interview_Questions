#include <iostream>
using namespace std;
 
int unique(int arr[],int size){
    
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){                          
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";  
                break;             
            }
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter size of array: "<<endl;
    cin>>n;

    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unique(arr,n);
    
    return 0;
}