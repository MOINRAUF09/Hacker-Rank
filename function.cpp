#include<iostream>
using namespace std;
//CHANGES
//changes 2nd
//gg

void return_greater_number(){
  //int large;
    int a[4];
    //int i=0;
    for (int i=0;i<4;i++){
       cin>>a[i];
    }
    //for (int i=0;i<4;i++){
       // cout<<arr[i];
   // }
  int temp;
   int i,j=0;
  for(i = 0; i<4; i++) {
   for(j = i+1; j<4; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] =  temp;
      }
   }
}
  //for (int i=0;i<5;i++){
    //    cout<<a[4];
    //}
    cout<<a[3];
    //return large;
}



int main(){
    return_greater_number();
}