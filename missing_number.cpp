


#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) {
     
        int sum_of_natural = n * (n+1) / 2;
        
        int sum_of_Given = 0;
        for(int i=0; i<n-1; i++){
            sum_of_Given = sum_of_Given + arr[i];
        }

        return sum_of_natural - sum_of_Given;
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

    cout<<"the missing element is "<< missingNumber(arr,n) <<endl;

}