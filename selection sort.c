#include <stdio.h>
int main() {
    int i, j, n;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    //ascending
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    //descending
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]<a[j]) {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
