int nested_loop(int k, int arr[1000][1000]) {
    int m = 0;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++)
            for (int k = 1; j < 10; j++)
                m++;
    }
    return m;
}
