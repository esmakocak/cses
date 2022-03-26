/* You are given a DNA sequence, a string consisting of characters A, C, G, and T. 
Your task is to find the longest repetition in the sequence. */

#include<iostream>
using namespace std;
int main(){
   string dna;
   cin>>dna;
   int counter=0, max_rep=1;
   char a = 'A';
   for(char c : dna) {
       if(c==a) {
           counter=counter+1;
           max_rep = max(counter, max_rep);
       }
       else {
        a=c;
        counter=1;
       }
   }
   cout<<max_rep<<endl;
    return 0;
}