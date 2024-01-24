// #include <iostream>
// using namespace std;

// int rotate(int arr[],int n,int k){
//     int temp[5];
//     for(int i=0;i<n;i++){
//         temp[(i+k)%n] = arr[i];
//     }
//     for(int i=0;i<n;i++){
//         arr[i] = temp[i];
//     }
// }
 
// int main(){
    
//     int arr[5] = {1,2,3,4,5};
    
//     rotate(arr,5,2);

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";

//     }
    
//     return 0;
// }



//----------------------------------------------------------------------------------




#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int rotate(int arr[],int n,int k){
            reverse(arr, arr+k);
            reverse(arr+k, arr+n);
            reverse(arr,arr+n);
}
 
int main(){
    
    int arr[5] = {1,2,3,4,5};
    
    rotate(arr,5,2);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";

    }
    
    return 0;
}
