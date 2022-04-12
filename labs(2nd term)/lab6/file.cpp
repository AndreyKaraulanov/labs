#include"file.hpp"
void Word(char* s1, char* s2) {
    while (*s1 != ' ') {
            *s2 = *s1;
            s2++; s1++;
            
    }
    *s2 = '\0';
}
