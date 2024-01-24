// “Given an integer array, move all elements that are 0 to the left while maintaining the order of other elements in the array. The array must be modified in-place.”


// approch 1

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> moveZero(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]== 0){
            count++;
        }
    }

    vector<int> v;;

    while(count){
        v.push_back(0);
        count--;
    }

    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            v.push_back(arr[i]);
        }
    }

    return v;

}

int main(){
    int arr[6] = {1, 23, 0, 2, 0, 0};
    vector<int> v = moveZero(arr,6);

    for(int i=0;i<6;i++){
        cout << v[i] << " ";
    }
}
*/

// Approch 2

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void moveZero(int arr[], int n){
    int i=0; int j=n-1;
    while(i < j){
        if(arr[i]!=0 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
        }
        else if(arr[i]==0 && arr[j]==0){
            i++; j--;
        }
        else if(arr[i]!=0 && arr[j]!=0){
            j--;
        }
        else{
            i++;
        }
    }


}

int main(){
    int arr[6] = {1, 23, 0, 2, 0, 0};
    moveZero(arr,6);

    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }
}






