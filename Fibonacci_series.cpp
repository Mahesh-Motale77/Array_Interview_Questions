#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter number for printing fibonacci series: "<<endl;
    cin>>n;

    int x=0;
    int y=1;

    cout<<x<<" ";
    cout<<y<<" ";

    for(int i=1;i<=n;i++){
        int sum= x + y;
        cout<<sum<<" ";

        x=y;
        y=sum;
    }  
    return 0;
}