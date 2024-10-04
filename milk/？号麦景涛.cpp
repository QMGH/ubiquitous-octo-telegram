#include <stdio.h>
#include <stdlib.h> // 用于使用动态内存分配的头文件

// 函数声明
static int findMax(int arr[], int size);

int main() {
    // 测试函数
    int size, i;

    // 输入数组大小
    printf("Enter the size of the array: ");
    scanf_s("%d", &size);

    // 声明并分配内存给数组
    int* arr = (int*)malloc(size * sizeof(int));

    // 输入数组元素
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf_s("%d", &arr[i]);
    }

    // 调用函数并打印结果
    int max = findMax(arr, size);
    printf("The maximum value in the array is: %d\n", max);

    // 释放动态分配的内存
    free(arr);

    return 0;
}

// 函数定义
static int findMax(int arr[], int size) {
    // 如果数组为空，返回一个特定的值（这里假设数组中不会出现这个特定的值）
    if (size == 0) {
        printf("Array is empty. Returning a default value.\n");
        return -1;
    }

    int max = arr[0];  // 假设第一个元素为最大值

    // 遍历数组，更新最大值
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}
