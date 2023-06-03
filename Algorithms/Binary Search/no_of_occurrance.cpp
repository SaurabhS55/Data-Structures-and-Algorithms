#include<bits/stdc++.h>
using namespace std;
int first(int arr[],int size,int key){
    int min=0,max=size-1,ans=-1;
    while(min<=max){
        int mid=min+(max-min)/2;
        if(arr[mid]==key){
            ans=mid;
            max=mid-1;
        }
        else if(arr[mid]>key){
            max=mid-1;
        }
        else{
            min=mid+1;
        }
    }
    return ans;
}
int last(int arr[],int size,int key){
    int min=0,max=size-1,ans=-1;
    while(min<=max){
        int mid=min+(max-min)/2;
        if(arr[mid]==key){
            ans=mid;
            min=mid+1;
        }
        else if(arr[mid]>key){
            max=mid-1;
        }
        else{
            min=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,3,3,3,3,3,3,5,10};
    int l=first(arr,9,3);
    int r=last(arr,9,3);
    int occurrance=(r-l)+1;
    cout<<occurrance;
    return 0;
}