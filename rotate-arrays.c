#include<stdio.h>

void reverse(int arr[], int si, int ei) {
    while(si < ei) {
        int temp = arr[si];
        arr[si] = arr[ei];
        arr[ei] = temp;
        si++;
        ei--;
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k;
    printf("Enter number of rotations: ");
    scanf("%d", &k);

    k = k % n;

    // Reverse whole array
    reverse(arr, 0, n - 1);

    // Reverse first k elements
    reverse(arr, 0, k - 1);

    // Reverse remaining elements
    reverse(arr, k, n - 1);

    printf("Rotated Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
