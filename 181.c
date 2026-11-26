#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    long long prefix[n], suffix[n], ans[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    prefix[0] = 1;
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] * arr[i - 1];

    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = suffix[i + 1] * arr[i + 1];

    for (int i = 0; i < n; i++)
        ans[i] = prefix[i] * suffix[i];

    for (int i = 0; i < n; i++)
        printf("%lld ", ans[i]);

    return 0;
}

