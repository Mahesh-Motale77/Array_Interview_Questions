
#include<iostream>
using namespace std;

bool isPalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    bool match;
    while(s<=e){
        if(name[s]==name[e]){
            match=true;
        }
        else{
            match=false;
            break;
        }
        s++;
        e--;
    }
    return match;
}

int main(){
    char name[6];
    cout<<"enter string "<<endl;

    cin>>name;

    bool ans=isPalindrome(name,6);

    if(ans){
        cout<<"string is Palindrome !";
    }
    else{
        cout<<"String is Not Palindrome !";
    }

}

