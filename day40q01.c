#include <stdio.h>
int main() {
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);

    // Print diagonally (i+j = constant)
    for(int k=0;k<r+c-1;k++){
        for(int i=0;i<r;i++){
            int j=k-i;
            if(j>=0 && j<c) printf("%d ", a[i][j]);
        }
    }
    return 0;
}
// Input: 3 3 / 1 2 3 / 4 5 6 / 7 8 9 -> Output: 1 2 4 3 5 7 6 8 9