//You just need to complete the function string\_sort and implement the four string comparison functions.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int distinct_chars(const char* s) {
    int freq[256] = {0}, count = 0;
    for (int i = 0; s[i]; i++) {
        if (!freq[(unsigned char)s[i]]) {
            freq[(unsigned char)s[i]] = 1;
            count++;
        }
    }
    return count;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int da = distinct_chars(a);
    int db = distinct_chars(b);
    if (da == db) return strcmp(a, b);
    return da - db;
}

int sort_by_length(const char* a, const char* b) {
    int la = strlen(a);
    int lb = strlen(b);
    if (la == lb) return strcmp(a, b);
    return la - lb;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (cmp_func(arr[j], arr[j + 1]) > 0) {
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}