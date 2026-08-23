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
        
        int count=0;
        int temp=2;
        
        while(count<n){
            int isPrime = 1;
            
            for(int i=2;i*i<=temp;i++){
                if(temp%i==0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                count++;
                if(count==n){
                    printf("%d\n",temp);
                }
            }
            temp++;
        }
        
        
    }
    return 0;
}
