#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" "<<endl;

    }
}
void change(int b[] , int size){
    b[0]= 100;
    for(int i=0;i<=4;i++){
        cout<<b[i]<<" "<<endl;
    }
}
int main(){
    int arr[5]= {1,23,5,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
}