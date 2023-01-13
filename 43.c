#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, ";
    char str2[] = "world!";

    
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    
    int len = strlen(str1);
    printf("Length of the string: %d\n", len);

    
    char str3[] = "hello, world!";
    int comparison = strcmp(str1, str3);
    if (comparison == 0) printf("The strings are equal.\n");
    else if (comparison < 0) printf("str1 is less than str3.\n");
    else printf("str1 is greater than str3.\n");

    char str4[20];
    strcpy(str4, str1);
    printf("Copied string: %s\n", str4);


    char *substring = strstr(str1, "world");
    printf("Found substring: %s\n", substring);

    return 0;}
    