
#include <iostream>
using namespace std;

bool sort_rotate(int arr[], int n){
    int count = 0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
        if(arr[n-1]>arr[0]){
            count++;
        }
    }
    return count;
}
 
int main(){
    
    int arr[5] = {1,2,3,4,5};

    int ans = sort_rotate(arr,5);

    cout<<ans<<endl;

    if(ans == 1){
        cout<<"Array is sorted and rotated"<<endl;
    }
    else{
        cout<<"array is not sorted and rotated"<<endl;
    }
    
    return 0;
}
