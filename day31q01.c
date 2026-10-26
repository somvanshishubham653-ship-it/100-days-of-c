#include <stdio.h>
int main(){
    int n, key, found=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("Found at position %d", i+1);
            found=1; break;
        }
    }
    if(!found) printf("Not found");
    return 0;
}