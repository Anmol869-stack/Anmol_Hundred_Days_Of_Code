#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n], deque[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if (k <= 0 || k > n)
        return 0;

    int front = 0, rear = -1;

    for (int i = 0; i < n; i++) {
        while (front <= rear && deque[front] <= i - k)
            front++;

        while (front <= rear && arr[deque[rear]] <= arr[i])
            rear--;

        deque[++rear] = i;

        if (i >= k - 1) {
            printf("%d", arr[deque[front]]);

            if (i < n - 1)
                printf(" ");
        }
    }

    printf("\n");

    return 0;
}

