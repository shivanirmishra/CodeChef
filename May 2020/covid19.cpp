#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t,n,i,j,minv,maxv,count;
    cin>>t;
    while(t--){
        cin>>n;
        minv = INT_MAX;
        maxv = 0;
        count = 1;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i = 0;i<n-1;i++){
            if((a[i+1]-a[i]) <= 2){
                count ++;
            }else{
                minv = min(minv,count);
                maxv = max(maxv,count);
                count = 1;
            }
        }
        minv = min(minv,count);
        maxv = max(maxv,count);
        cout<<minv<<" "<<maxv<<endl;
    }
    
    return 0;
}
//https://www.codechef.com/MAY20B/problems/COVID19
