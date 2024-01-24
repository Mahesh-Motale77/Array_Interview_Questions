
#include <iostream>
using namespace std;

int firstocc(int arr[],int n,int key){
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{  //arr[mid]>key
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}


int lastocc(int arr[],int n,int key){
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{  //arr[mid]>key
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
 
int main(){
    
    int arr[7] = {1,2,3,3,3,3,5};

    cout<<"first occurrence of 3 is "<<firstocc(arr,7,3)<<endl;
    cout<<"last occurrence of 3 is "<<lastocc(arr,7,3)<<endl;

    cout<<endl;
    
    int total = (lastocc(arr,7,3) - firstocc(arr,7,3)) + 1;
    cout<<"Total no of occurrence of 3 is "<<total<<endl;
    cout<<endl;
    return 0;
}

