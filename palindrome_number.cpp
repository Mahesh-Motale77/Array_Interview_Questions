#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string is_palindrome(int n)
		{
		    // Code here.
		    string s = to_string(n);
		    string test = s;
		    reverse(s.begin(), s.end());
		    if(test == s){
		        return "Yes";
		    }
		    return "No";
		}

int main(){
    int n;
    cin >> n;

    cout << is_palindrome(n);
}


// two pointer approch