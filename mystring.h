#ifndef MYSTRING_H
#define MYSTRING_H

namespace my {
    int strcmp(const char *R, const char *L);
    int strlen(const char *s);
    char *strcat(char *L, const char *R);
    char *strcpy(char *L, const char *R);
    char *toupper(char *s);
}

#endif