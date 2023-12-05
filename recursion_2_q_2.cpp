#include<iostream>
using namespace std;
void index(int arr[],int n,int target,bool flag){
    if(n==-1) return;
    if(target==arr[n]){
        cout<<n<<endl;
        flag=false;
        return;
    }
    index(arr,n-1,target,flag);
}
int main(){
    int arr[]={1,2,1,5,1,6,8,4,0,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=50;
    bool flag=true;
    index(arr,n-1,target,flag);
    if(flag==true) cout<<"The target element not present";
}