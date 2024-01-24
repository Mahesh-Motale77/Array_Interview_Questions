

//*************************** Insertion Sort *******************************


#include <iostream>
using namespace std;

int insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > temp){
                arr[j+1] = arr[j];   
        j--;
        }
        arr[j+1] = temp;
    }
}
 
int main(){
    
    int arr[5] = {4,3,2,10,1};

    insertion_sort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}