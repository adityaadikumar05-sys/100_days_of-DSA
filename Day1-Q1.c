#include <stdio.h>
int main(){

    int n, pos, x;

    if (scanf ("%d", &n) != 1)
    return 1;

    int arr[100];

    for (int i=0 ; i < n ;i++) {
        if (scanf ("%d", &arr[i]) !=1)
        return 1;
    }
    if(scanf("%d", &pos) !=1)
    return 1;

    if(scanf("%d", &x) !=1)
    return 1;

    int index = pos - 1;

    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = x;
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}