
#include <iostream>
using namespace std;

void sorting(int arr[],int n){
    int s = 0;
    int e = n-1;
    int m = 0;
    while(m<=e){
        if(arr[m]==0){
            swap(arr[s],arr[m]);
            s++; m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[e]);
            e--;
        }
        
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
    

    sorting(arr,n);

    cout<<"array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

