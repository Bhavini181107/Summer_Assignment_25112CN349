//WAP to intersection of arrays.
#include <stdio.h>

int main() {
    int n,m,i,j;

    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&m);
    int b[m];

    for(i=0;i<m;i++)
        scanf("%d",&b[i]);

    printf("Intersection: ");

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                printf("%d ",a[i]);
                break;
            }
        }
    }

    return 0;
}