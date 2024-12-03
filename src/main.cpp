#include <iostream>
#include "kstring.h"
#include "kstring.cpp"

int main() {
    Kai::String message = "Hello World";

    printf("%s\n", message.c_str());
}