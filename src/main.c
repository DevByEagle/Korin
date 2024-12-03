#include <stdio.h>
#include <stdlib.h>

#include "view.h"

typedef struct {

} Token;

String_View read_file_to_view(char* filename) {
    FILE* file = fopen(filename, "r");

    fseek(file, 0, SEEK_END);
    size_t len = ftell(file);
    fseek(file, 0, SEEK_SET);

    char* data = malloc(sizeof(char)*len);
    fread(data, sizeof(char), len, file);

    fclose(file);
    return (String_View){.data=data, .len=len};  
}

Token* lex(String_View view) {
    
}

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("USAGE: %s <file_to_compile>\n", argv[0]);
        exit(0);
    }

    String_View view = read_file_to_view(argv[1]);
    printf(View_Print"\n", View_Arg(view));
}