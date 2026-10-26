#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[100]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int largest=a[0], second=-99999;
    for(int i=1;i<n;i++) if(a[i]>largest) largest=a[i];
    for(int i=0;i<n;i++) if(a[i]!=largest && a[i]>second) second=a[i];
    printf("Second largest: %d",second);
    return 0;
}
