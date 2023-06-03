//WAP to find square root of a number with precision 3.
#include<bits/stdc++.h>
using namespace std;
int sqrt(int n){
    int min=0,max=n;
    while(min<=max){
        int mid=(min+max)/2;
        if(n/mid==mid){
            return mid;
        }
        else if(n/mid<mid){
            max=mid-1;
        }
        else{
            min=mid+1;
        }
    }
    return min;
}
double precision(int n,int p,int root){
    double ans=root;
    double factor=1;
    for(int j=0;j<p;j++){
        factor/=10;
        for(double i=ans;i*i<n;i+=factor){
            ans=i;
        }
    }
    return ans;
}
int main(){
    cout<<"\n Enter a number: "<<endl;
    int n;
    cin>>n;
    int root = sqrt(n);
    double p = precision(n,3,root);
    cout<<"\n Square root of "<<n<<" is "<<p;
    return 0;
}