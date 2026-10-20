#include <stdio.h>
int main(){
    int n,p=0,neg=0,z=0; scanf("%d",&n); int a[100];
    for(int i=0;i<n;i++){scanf("%d",&a[i]); if(a[i]>0) p++; else if(a[i]<0) neg++; else z++;}
    printf("Pos=%d Neg=%d Zero=%d",p,neg,z);
    return 0;
}