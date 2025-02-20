char* decimal_to_binary(int num, int numsSize){
    char* binary = (char*)malloc((numsSize) * sizeof(char));

    // initialize array
    for(int i = 0; i < numsSize; i++){
        binary[i] = '0';
    }

    if(num == 0){
        return binary;
    }

    int i = numsSize - 1;
    while(num > 0){
        binary[i] = num % 2 + '0';
        num /= 2;
        i--;
    }

    return binary;
}


char* findDifferentBinaryString(char** nums, int numsSize) {
    int* arr = (int *)calloc((1 << numsSize), sizeof(int));
    char* return_val = (char*)malloc((numsSize + 1) * sizeof(char));

    for(int i = 0; i < numsSize; i++){
        int decimal = strtol(nums[i], NULL, 2);

        // denote seen values as 1, not seen as 0
        arr[decimal] = 1;
    }

    int index = 0;
    while(arr[index] == 1){
        index++;
    }

    strncpy(return_val, decimal_to_binary(index, numsSize), numsSize + 1);
    free(arr);

    return return_val;
}