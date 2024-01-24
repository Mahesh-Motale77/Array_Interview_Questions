
#include<iostream>
using namespace std;

char maxOccChar(string s){
    int arr[26]={0};

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        number = ch - 'a';
        arr[number]++;
    }

    int maxi=-1; int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
            ans=i;
        }
    }
    return 'a'+ans;
}

int main(){
    string s;
    cout<<"Enter the String: "<<endl;
    cin>>s;

    char answer=maxOccChar(s);
    cout<<"The Character which occurred max time is: "<< answer <<endl;
}