
#include <iostream>
using namespace std;
 
int main(){
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[3] = {3,7,6};
    
    for(int i=0;i<6;i++){

        for(int j=0;j<3;j++){

                // if(arr1[i]<arr2[j]){                           // in case array sorted in increasing order
                //     break;
                // }

            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
                }
        }
    }

    return 0;
}

