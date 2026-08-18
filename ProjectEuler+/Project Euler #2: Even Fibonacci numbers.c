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
        scanf("%lld",&n);
        
        long long a=2;
        long long b=8;
        long long sum=0;
        
        while(a<=n){
            sum+=a;
            
            long long next = 4*b+a;
            a=b;
            b=next;
        }
        
        printf("%lld\n",sum);
    }
    return 0;
}
