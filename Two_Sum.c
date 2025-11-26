/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    int tempA;
    int tempB;
    int sumAB;

    for (int i = 0; i < numsSize-1; i++) {
        tempA = nums[i];
        for (int j = 0; j < numsSize; j++) {
            if (i != j) {
                tempB = nums[j];
                sumAB = tempA + tempB;
            }

            if (sumAB == target) {
                int * result = (int*)malloc(2 * sizeof(int));
                result[0] = j;
                result[1] = i;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}