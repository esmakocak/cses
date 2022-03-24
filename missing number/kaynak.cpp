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