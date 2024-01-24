#include <iostream>  
using namespace std; 

int main()  
{  
   int i,fact=1,number;    
   cout<<"Enter any Number: ";    
   cin>>number;    
   for(i=1;i<=number;i++){    
      fact=fact*i;    
   }    
   cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
   return 0;  
}  



//--------------------------------------------------------------------------


// #include <iostream> 
// using namespace std; 
   
// int factorial(int n) 
// { 
//     if (n == 0 || n == 1) 
//         return 1; 
//     return n * factorial(n - 1); 
// } 
  
 
// int main() 
// { 
//     int num = 5; 
//     cout << "Factorial of "
//          << num << " is " << factorial(num) << endl; 
//     return 0; 
// } 