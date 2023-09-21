#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10;
    int y= 15;
    int* ptr= &x;
    cout<<ptr<<endl;
    // here we are appling pointer incriment
    // here we are appling +1 thats doesnot mean
    // the reference value will be added by 1
    // here +1 meaans ref+size(data type)
   // ptr=ptr+1;
     int b= *ptr++;
     cout<<b<<endl;



     
    cout<<ptr;



}