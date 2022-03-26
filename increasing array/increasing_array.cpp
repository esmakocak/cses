/* You are given an array of n integers. 
You want to modify the array so that it is increasing, 
i.e., every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. 
What is the minimum number of moves required? */

#include<iostream>
using namespace std;
int main() {
    long int a, counter=0; 
    cin>>a;
    long int A[a];
    for(size_t i=0;i<a;i++){
        cin>>A[i];
    }
    for(size_t i = 0; i < a; i++) {
        if(A[i+1]<A[i]){
            counter += A[i] - A[i+1];
            A[i+1] = A[i];      
        }
    }

    cout<<counter<<endl;

    return 0;
}