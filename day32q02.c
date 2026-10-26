#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    if(n<0) n=-n;
    int freq[10]={0};
    if(n==0) freq[0]=1;
    while(n>0){
        freq[n%10]++;
        n/=10;
    }
    int max=0, digit=0;
    for(int i=0;i<10;i++){
        if(freq[i]>max){ max=freq[i]; digit=i; }
    }
    printf("%d occurs %d times",digit,max);
    return 0;
}