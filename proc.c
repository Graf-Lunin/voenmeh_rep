int has_adjacent_equal(int *a, int n) {
    for (int i = 0; i < n - 1; i++)
        if (a[i] == a[i + 1])
            return 1;
    return 0;
}

int find_max_negative(int *a, int n) {
    int idx = -1;
    for (int i = 0; i < n; i++)
        if (a[i] < 0 && (idx == -1 || a[i] > a[idx]))
            idx = i;
    return idx;
}

int remove_at(int *a, int n, int pos) {
    for (int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];
    return n - 1;
}
