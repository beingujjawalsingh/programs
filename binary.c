#include<stdio.h>

int main() {
    int arr[] = {2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key, left = 0, right = n - 1, mid;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    
    for (; left <= right; ) {
        mid = left + (right - left) / 2;

        if (arr[mid] == key) { 
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (arr[mid] < key) { 
            left = mid + 1;
        }
        else { 
            right = mid - 1;
        }
    }


    printf("Element not found in the array\n");
    
    return 0;
}
