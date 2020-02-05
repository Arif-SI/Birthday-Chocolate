#include<stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i, d, m, ck, j,k, tmp=0;
    for(i=0;i<n;++i){
        scanf("%d", &a[i]);
    }
    scanf("%d%d", &d, &m);

    for(i=0;i<n;i++){
        ck=0;j=i; k=m;
        while(k){
            ck+=a[j];
            k--;
            j++;

        }
        //printf("ck=%d\n", ck);
        if(ck==d) tmp++;

    }
    printf("%d\n", tmp);



}
