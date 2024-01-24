
#include <iostream>
using namespace std;

int pairsum(int arr[],int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){

                cout<< min(arr[i],arr[j]) <<" ";
                cout<< max(arr[i],arr[j]) <<endl;

                // cout<<arr[i]<<" "<<arr[j]<<endl;      
            }
        }
    }
}
 
int main(){
    int n,sum;
    cout<<"enter size of array "<<endl;
    cin>>n;

    int arr[100];
    cout<<"enter element of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter number for pair sum "<<endl;
    cin>>sum;

    pairsum(arr,n,sum);
    
    return 0;
}

