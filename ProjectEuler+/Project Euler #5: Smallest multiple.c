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
        long long a=1;
        int i=1;
        
        while(i<=n){
            if(a%i==0){
                i++;
            }else{
                a++;
                i=1;
            }
        }
        printf("%lld\n",a);
    }
    return 0;
}
