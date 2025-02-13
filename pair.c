#include <stdio.h>

int evenOdd(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int arr[10], res[10];
    int count = 0;
    int even = 0, odd = 0;
    int s = 10;
    int resIndex = 0;

    for (int i = 0; i < s; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < s; i++) {
        if (evenOdd(arr[i])) {
            even++;
        } else {
            odd++;
        }
    }

    if (even > odd) {
        for (int i = 0; i < s; i++) {
            if (evenOdd(arr[i])) {
                res[resIndex++] = arr[i];
            }
        }
    } else {
        for (int i = 0; i < s; i++) {
            if (evenOdd(arr[i])) {
                res[resIndex++] = arr[i];
                count = odd - even;
            }
        }
    }

    if (even > odd) {
        printf("%d\n", odd);
    } else {
        printf("%d\n", even);
    }

    return 0;
}