#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int a[100]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    k=k%n;
    // simple method using extra array
    int b[100];
    for(int i=0;i<n;i++) b[(i+k)%n]=a[i];
    for(int i=0;i<n;i++) printf("%d ",b[i]);
    return 0;
}
