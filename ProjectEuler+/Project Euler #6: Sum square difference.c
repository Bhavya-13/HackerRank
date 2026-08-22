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
        int n; 
        scanf("%d",&n);
        long long sqofsum=0,sumofsq=0;
        
        //sum of square
        for(int i=0;i<=n;i++){
            sumofsq = sumofsq + (i*i);
        }
        
        //sq of sum
        for(int j=0;j<=n;j++){
            sqofsum=sqofsum+j;
        }
        sqofsum = pow(sqofsum,2);
        long long diff = sqofsum - sumofsq;
        printf("%lld\n", diff);
    }
    
    return 0;
}
