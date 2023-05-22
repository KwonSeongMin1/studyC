#include <stdio.h>

int main() {
    
    int t,n,printZero[41],printOne[41]; // print 0 1
    printZero[0] = 1, printOne[0] = 0;  // fibo(0)
    printZero[1] = 0, printOne[1] = 1;  // fibo(1)
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        
        if(n<2){    // if fibo(2) under
            printf("%d %d\n",printZero[n],printOne[n]);
        } 
        else{
            for(int j=2;j<=n;j++){
                printZero[j] = printZero[j-1] + printZero[j-2];
                printOne[j] = printOne[j-1] + printOne[j-2];
            }
            printf("%d %d\n",printZero[n],printOne[n]);
        }
    }

    return 0;
}