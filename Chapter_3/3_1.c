/* Optimized binsearch: one test inside the loop */
int binsearch_opt(int x, int v[], int n) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    // After loop, mid might be one of the boundaries
    if (v[mid] == x)
        return mid;
    return -1;
}

