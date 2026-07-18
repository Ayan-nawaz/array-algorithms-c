#include<stdio.h>
#include<limits.h>

int main() {
    int arr[7] = {1,2,3,4,3,2,1};

    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i = 0; i < 7; i++) {
        if(arr[i] > max) {
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }

    printf("Second Maximum = %d", smax);

    return 0;
}
