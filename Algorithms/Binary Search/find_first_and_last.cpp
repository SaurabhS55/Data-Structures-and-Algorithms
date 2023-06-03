#include <bits/stdc++.h> 
using namespace std;
int findFirst(vector<int>& arr,int n, int k){
    int min=0,max=n-1,ans=-1;
    while(min<=max){
        int mid=min+(max-min)/2;
        if(arr[mid]==k){
            ans=mid;
            max=mid-1;
        }
        else if(arr[mid]<k){
            min=mid+1;
        }
        else{
            max=mid-1;
        }
    }
    return ans;
}
int findLast(vector<int>& arr,int n, int k){
    int min=0,max=n-1,ans=-1;
    while(min<=max){
        int mid=min+(max-min)/2;
        if(arr[mid]==k){
            ans=mid;
            min=mid+1;
        }
        else if(arr[mid]<k){
            min=mid+1;
        }
        else{
            max=mid-1;
        }
    }
    return ans;
}
void firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int l=findFirst(arr, n, k);
    int r=findLast(arr, n, k);
    // pair<int,int> p;
    cout<<l<<" "<<r;
}
int main(){
    vector<int> v={0,0,1,1,2,2,2,2};
    firstAndLastPosition(v,8,2);
    return 0;
}