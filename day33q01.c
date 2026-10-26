#include <stdio.h>
int main(){
    int n,key;
    scanf("%d",&n);
    int a[100]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);
    int low=0, high=n-1, found=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){ printf("Found at %d",mid+1); found=1; break; }
        else if(a[mid]<key) low=mid+1;
        else high=mid-1;
    }
    if(!found) printf("Not found");
    return 0;
}
