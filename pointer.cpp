# include<bits/stdc++.h>
using namespace std;
int addition( int x,int y){
    int z=x+y;
    return z;

}
 void swap( int* x,int* y){
     int v= *x;
      *x= *y;
      *y=*x;

 }
int main(){
    // addition uding pointer
    int x = 10;
    int y=15;
   int v= addition(x,y);
     swap(x,y);

     
   cout<<v<<endl;
   cout<<x<<" "<<y;






}