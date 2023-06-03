//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here
int binary(vector<int> v,int mi,int ma,int key){
    int min=mi,max=ma;
    while(min<=max){
        int mid=min+(max-min)/2;
        if(v[mid]==key){
            return mid;
        }
        else if(v[mid]>key){
            max=mid-1;
        }
        else{
            min=mid+1;
        }
    }
    return -1;
}
int pivote(vector<int> v){
    int min=0,max=v.size()-1;
    while(min<max){
        int mid=min+(max-min)/2;
        if(v[mid]>=v[0]){
            min=mid+1;
        }
        else{
            max=mid;
        }
    }
    return min;
}
int Search(vector<int> vec, int K) {
    //code here
    // int key=k;
    int p=pivote(vec);
    // cout<<p;
    if(vec[p]<=K && K<=vec[vec.size()-1]){
        return binary(vec,p,vec.size()-1,K);
    }
    else{
        return binary(vec,0,p-1,K);
    }
    
}
int main(){
    vector<int> v({5,6,7,8,9,10,1,2,3});
   int x=Search(v,10);
   cout<<x;

   return 0;
    }

// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
