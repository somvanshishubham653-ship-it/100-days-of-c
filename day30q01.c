#include <stdio.h>
int main(){
    int n,e=0,o=0; scanf("%d",&n); int a[100];
    for(int i=0;i<n;i++){scanf("%d",&a[i]); if(a[i]%2==0) e++; else o++;}
    printf("Even=%d Odd=%d",e,o);
    return 0;
}