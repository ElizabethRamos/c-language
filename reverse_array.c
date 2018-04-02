#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the reverseArray function below.
 */

/*
 * Please store the size of the integer array to be returned in result_count pointer. For example,
 * int a[3] = {1, 2, 3};
 *
 * *result_count = 3;
 *
 * return a;
 *
 */
int* reverseArray(int a_count, int* a, int* result_count) {
    *result_count = a_count;
    int* b = malloc(a_count * sizeof(int));
    int b_itr = 0;
    for(int a_itr = a_count -1; a_itr >= 0; a_itr--) {
        b[b_itr] = a[a_itr];
        b_itr++;
    }
    return b;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* arr_count_endptr;
    char* arr_count_str = readline();
    int arr_count = strtol(arr_count_str, &arr_count_endptr, 10);

    if (arr_count_endptr == arr_count_str || *arr_count_endptr != '\0') { exit(EXIT_FAILURE); }

    char** arr_temp = split_string(readline());

    int arr[arr_count];

    for (int arr_itr = 0; arr_itr < arr_count; arr_itr++) {
        char* arr_item_endptr;
        char* arr_item_str = arr_temp[arr_itr];
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        arr[arr_itr] = arr_item;
    }

    int res_count;
    int* res = reverseArray(arr_count, arr, &res_count);

    for (int res_itr = 0; res_itr < res_count; res_itr++) {
        fprintf(fptr, "%d", res[res_itr]);

        if (res_itr != res_count - 1) {
            fprintf(fptr, " ");
        }
    }

    fprintf(fptr, "\n");

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}