#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void armstrong(int n)
{
        int original = n;
        int sum = 0;
        while(n>0){
             int digit = n % 10;
             sum = sum + (digit*digit*digit);  
             n = n / 10;        
        }

        if(original == sum){
            cout << "yes";
        }
        else{
            cout << "NO";
        }   
}

int main(){
    int n;
    cout << "Enter:  ";
    cin >> n;

    armstrong(n);
    
    return 0;
}