void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    // Step 1: Copy nums2 into the end of nums1
    for (int i = 0; i < n; i++) {
        nums1[m + i] = nums2[i];
    }

    // Step 2: Perform Insertion Sort on the entire nums1 array
    int totalSize = m + n;
    for (int i = 1; i < totalSize; i++) {
        int key = nums1[i];
        int j = i - 1;

        // Move elements of nums1[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && nums1[j] > key) {
            nums1[j + 1] = nums1[j];
            j = j - 1;
        }
        nums1[j + 1] = key;
    }
}