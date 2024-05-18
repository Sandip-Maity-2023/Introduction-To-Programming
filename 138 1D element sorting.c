#include <stdio.h>

int main() {
    int a[100], t, n;
    printf("Enter the size:");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
