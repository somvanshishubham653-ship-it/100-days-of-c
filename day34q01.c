#include <stdio.h>
int main(){
    int n,pos,x;
    scanf("%d",&n);
    int a[100]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d %d",&pos,&x); // pos 1-based
    for(int i=n;i>=pos;i--) a[i]=a[i-1];
    a[pos-1]=x; n++;
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
