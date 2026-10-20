#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int p=1; for(int j=2;j*j<=i;j++) if(i%j==0){p=0; break;}
        if(p) printf("%d ",i);
    }
    return 0;
}
// Input: 20 -> Output: 2 3 5 7 11 13 17 19