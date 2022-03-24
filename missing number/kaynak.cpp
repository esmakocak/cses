/*You are given all numbers between 1,2,…,n except one. 
Your task is to find the missing number.*/

#include<iostream> 
using namespace std; 
int main () {
    long int n, a, sum=0; 
    cin>>n;
    for(int i=1;i<n;i++) {
        cin>>a;
        sum=sum+a;
    }
    
    cout << n*(n+1)/2-sum << endl;

return 0; 
}