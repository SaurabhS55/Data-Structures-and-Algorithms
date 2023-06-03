#include<bits/stdc++.h>
using namespace std;
int mountain(int arr[],int size){
    int min=0,max=size-1;
    while(min<max){
        int mid=min+(max-min)/2;
        if(arr[mid]<arr[mid+1]){
            min=mid+1;
        }
        else{
            max=mid;
        }
    }
    return min;
}
int main(){
    int arr[]={12,16,22,36,32,18,9,5};
    int peak=mountain(arr,8);
    cout<<arr[peak];
    return 0;
}