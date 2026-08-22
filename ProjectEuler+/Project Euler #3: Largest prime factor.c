#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long n; 
        scanf("%ld",&n);
        
        long long largest = 1;
        
        while(n%2==0){
            largest =2;
            n=n/2;
        }
        
        for(long long j=3; j*j<=n; j+=2){
            while(n%j==0){
                largest=j;
                n=n/j;
            }
        }
        if(n>1){
            largest = n;
        }
        
        printf("%lld\n", largest);
        
    }
    return 0;
}
