#include <stdio.h>
#include <stdlib.h> // ����ʹ�ö�̬�ڴ�����ͷ�ļ�

// ��������
static int findMax(int arr[], int size);

int main() {
    // ���Ժ���
    int size, i;

    // ���������С
    printf("Enter the size of the array: ");
    scanf_s("%d", &size);

    // �����������ڴ������
    int* arr = (int*)malloc(size * sizeof(int));

    // ��������Ԫ��
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf_s("%d", &arr[i]);
    }

    // ���ú�������ӡ���
    int max = findMax(arr, size);
    printf("The maximum value in the array is: %d\n", max);

    // �ͷŶ�̬������ڴ�
    free(arr);

    return 0;
}

// ��������
static int findMax(int arr[], int size) {
    // �������Ϊ�գ�����һ���ض���ֵ��������������в����������ض���ֵ��
    if (size == 0) {
        printf("Array is empty. Returning a default value.\n");
        return -1;
    }

    int max = arr[0];  // �����һ��Ԫ��Ϊ���ֵ

    // �������飬�������ֵ
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}
