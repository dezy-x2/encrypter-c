#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int getCharCode(char c);
char* encrypt(char* str, char** key);
char** generateKey();
int indexOf(char** arr, int size, char* item);
char* decrypt(char* str, char** key);
char* slice(char* str, int idx, int amount);