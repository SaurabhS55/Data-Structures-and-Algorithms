#include<bits/stdc++.h>
using namespace std;
int pivote(int arr[],int size){
    int min=0,max=size-1;
    while (min<max)
    {
        /* code */
        int mid=min+(max-min)/2;
        if(arr[mid]>=arr[0]){
            min=mid+1;
        }
        else{
            max=mid;
        }
    }
    return min;
}
int main(){
    int arr[]={7,9,1,2,3};
    int p=pivote(arr,5);
    cout<<"Pivote element "<<arr[p]<<" found at index "<<p;
    return 0;
}