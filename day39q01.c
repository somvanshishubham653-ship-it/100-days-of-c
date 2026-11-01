#include <stdio.h>
int main() {
    int n; scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i][i]==a[j][j]){
                printf("Diagonal not distinct"); return 0;
            }
    printf("Diagonal distinct");
    return 0;
}