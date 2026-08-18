#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long sumMultiples(long long n, long long k){
    long long m=(n-1)/k;
    return k*m*(m+1)/2;
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long n; 
        scanf("%lld",&n);
        long long ans = sumMultiples(n,3)+sumMultiples(n,5)-sumMultiples(n,15);
        
        printf("%lld\n",ans);        
    }

    return 0;
}
