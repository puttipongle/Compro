#include <stdio.h>

char *GetText();

int main(){
    char *str;
    str = GetText();
    printf("\nYour Text: %s\n", str);
    return 0;
}

char *GetText(){
    char *text = new char[20];
    printf("Enter Text: ");
    gets(text);
    return text;
}
