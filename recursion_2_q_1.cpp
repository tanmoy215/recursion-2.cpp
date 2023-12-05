#include<iostream>
using namespace std;
void fun(int arr[],int n){
  if(n==-1) return;
  cout<<arr[n]<<" ";
  fun(arr,n-1);
}
int main(){
    int arr[]={1,4,2,5,1,8,2,9,80,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    fun(arr,n-1);
}