#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}

int main(void) {
	// your code goes here
	int t,n,mini=INT_MAX,maxi=0,count=1,a[100],i,j,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
	    
	    mini=INT_MAX,maxi=0,count=1;
	    
	    for(j=0;j<n;j++){
	        scanf("%d",&a[j]);
	    }
	    for(k=0;k<n-1;k++){
	        if((a[k+1]-a[k])<=2){
	            count++;
	        }
	        else{
                mini = min(mini,count);
                maxi = max(maxi,count);
                count = 1;
            }
	    }
	    mini = min(mini,count);
        maxi = max(maxi,count);
	    printf("%d %d\n",mini, maxi);
	}
	
	return 0;
}


//https://www.codechef.com/MAY20B/submit/COVID19