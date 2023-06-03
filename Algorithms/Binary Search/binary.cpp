#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int size,int key){
    int min=0,max=size-1;
    while(min<=max){
        int mid=min+(max-min)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            min=mid+1;
        }
        else{
            max=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[6]={10,20,30,40,50,60};
    int arr1[5]={2,6,8,25,69};
    cout<<"\n Element 20 found at index "<<binary(arr,6,25);
    cout<<"\n Element 69 found at index "<<binary(arr1,5,70);
    return 0;
}