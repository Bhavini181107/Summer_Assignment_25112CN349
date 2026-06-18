//WAP to union of arrays.
#include <stdio.h>

int main() {
    int n,m,i,j,flag;

    scanf("%d",&n);
    int a[100];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&m);
    int b[m];

    for(i=0;i<m;i++)
        scanf("%d",&b[i]);

    printf("Union: ");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    for(i=0;i<m;i++){
        flag=0;
        for(j=0;j<n;j++){
            if(b[i]==a[j]){
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ",b[i]);
    }

    return 0;
}
