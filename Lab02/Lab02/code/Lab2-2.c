#include <stdio.h>

void GetText( char *text);
int main(){
    char str[20];
    GetText(str);
    printf("\nYour Text: %s\n", str);
    return 0;
}

void GetText( char *text){
    printf("Enter Text: ");
    gets(text);
}