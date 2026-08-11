int removeDuplicates(int* nums, int numsSize) {
    // Edge case: if the array is empty, return 0
    if (numsSize == 0) return 0;

    int i = 0; // The "slow" pointer

    for (int j = 1; j < numsSize; j++) {
        // If we find a value different from the last unique element
        if (nums[j] != nums[i]) {
            i++;           // Move the unique pointer forward
            nums[i] = nums[j]; // Update the next unique slot
        }
    }

    // The number of unique elements is the index + 1
    return i + 1;
}