#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    long long sum=0;
    sum=n*(n+1)/2;
    long long x;
    // long long sum1=0;
    for(int i=0;i<n-1;i++){
        cin>>x;
        sum=sum-x;
    }
    cout<<sum<<endl;
}

