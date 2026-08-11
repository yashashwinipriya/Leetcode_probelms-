int removeElement(int* nums, int numsSize, int val) {
    int k = 0; // Pointer for the next position of a non-val element

    for (int i = 0; i < numsSize; i++) {
        // If the current element is NOT the one we want to remove
        if (nums[i] != val) {
            nums[k] = nums[i]; // Move it to the 'k' index
            k++;               // Increment the count of valid elements
        }
    }

    // k is the total number of elements not equal to val
    return k;
}