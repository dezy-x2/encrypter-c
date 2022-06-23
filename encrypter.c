#include "encrypter.h"

char* dictionary[26][4] = {"aay", "bee", "see", "dee", "eee", "eff", "gee", "hct", "aye", "jay", "kay", "ell", "emm", "enn", "ohh", "pee", "que", "are", "ess", "tee", "you", "vee", "dub", "exx", "why", "zee"};

int main() {
    printf("Hello, World!\n");
    for (int i=0; i<26; i++) {
        printf("%s\n", dictionary[0][i]);
    }

    char* encrypted = encrypt("danieldesmond");
    printf("%s\n", encrypted);
}

int getCharCode(char c) {
    return (int)c - 97;
}

char* encrypt(char* str) {
    char* finalStr = (char*)calloc(1, sizeof(3 * strlen(str)));

    for (int i=0; i<strlen(str); i++) {
        int replacementIdx = getCharCode(str[i]);
        finalStr = strncat(finalStr, dictionary[0][replacementIdx], sizeof(finalStr) + sizeof(dictionary[0][replacementIdx]));
    }

    return finalStr;
}
