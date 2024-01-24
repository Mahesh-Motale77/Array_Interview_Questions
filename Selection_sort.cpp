// *************************************** Selection Sort ********************************************
 

#include <iostream>
using namespace std;

int selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index = i;
        
        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[min_index])
                min_index = j;

        }

        swap(arr[i],arr[min_index]);
    }
}
 
int main(){
    
    int arr[5] = {64,25,12,22,11};

    selection_sort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}