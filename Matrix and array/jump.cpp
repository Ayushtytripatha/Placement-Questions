#include <bits/stdc++.h> 
using namespace std; 
int jumpSearch(int arr[],int n,int x) 
{ 
    int jump = 1;
    int prev=1;
    if(arr[0]==x){
        return 0;
    }
    while(x>arr[jump] && jump<n){
        prev = jump;
        jump = jump*2;
        if(jump > n - 1){
            jump = n;
            break;
        } 
    }
    
    for(int i = prev; i<=jump; i++) { 
      if(arr[i] == x)
         return i;
   }
   return -1;
} 
  
int main(void) 
{ 
    int arr[] = {1,2,3,4,5,6,7,8,9,10,40}; 
    int x = 5; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = jumpSearch(arr,n,x);  
    if(result>=0)
      cout << "\n Item found at location: " << result;
   else
      cout << "\n Item is not found in the list.";
    return 0; 
} 