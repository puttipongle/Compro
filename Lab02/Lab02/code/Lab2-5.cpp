#include <stdio.h>

char (*GetText())[16];

int main(){
    char (*str)[16];
    str = GetText();
    for (int i = 0; i < 10; i++){
     printf("%s\n", str[i]);
    }
    return 0;
}

char (*GetText())[16]{
	int i;
    char (*text)[16];
    for (int i = 0; i < 10; i++){
    printf("Enter Text [%d]: ", i);
    gets(text[i]);
    }
    return text;
}
