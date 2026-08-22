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
        
        long long largest = 0;
        
        for(int i=100;i<=999;i++){
            for(int j=100;j<=999;j++){
                long long product = i*j;
                
                long long temp = product;
                long long reverse = 0;
                
                while(temp>0){
                    reverse = reverse*10+temp%10;
                    temp=temp/10;
                }
                if(reverse == product && product <n){
                    if(product>largest){
                        largest = product;
                    }
                }
            }
        }
        printf("%lld\n", largest);
    }
    return 0;
}
