#include "encrypter.h"

char* dictionary[26][4] = {"aay", "bee", "see", "dee", "eee", "eff", "gee", "hct", "aye", "jay", "kay", "ell", "emm", "enn", "ohh", "pee", "que", "are", "ess", "tee", "you", "vee", "dub", "exx", "why", "zee"};

int main() {
    printf("Hello, World!\n");
    // for (int i=0; i<26; i++) {
    //     printf("%s\n", dictionary[0][i]);
    // }

    // char* encrypted = encrypt("danieldesmond", dictionary);
    // printf("%s\n", encrypted);
    // char* decrypted = decrypt(encrypted, dictionary);
    // printf("%s\n", decrypted);

    // char** newDict = generateKey();
    // for (int j=0; j<26; j++) {
    //     printf("%d: %s\n",j, newDict[j]);
    // }
    // printf("\n%d: %s\n", indexOf(newDict, 26, newDict[25]), newDict[25]);
    // printf("Original: %s | Sliced: %s\n", "Hello", slice("Hello", 0, 2));
}

/**
 * @brief returns the charCode of a-z starting at 0 (this will eventually become defunct)
 * 
 * @param c (char) char to get code of
 * @return int - the char code
 */
int getCharCode(char c) {
    return (int)c - 97;
}

/**
 * @brief encrypts a string with a dictionary key (currently uses global will be adapted to use dynamic)
 * 
 * @param str (char*) the string to encrypt
 * @return char* - the final encrypted string
 */
char* encrypt(char* str, char** key) {
    char* finalStr = (char*)calloc(1, sizeof(char) * 3 * strlen(str));
    for (int i=0; i<strlen(str); i++) {
        int replacementIdx = getCharCode(str[i]);
        finalStr = strncat(finalStr, key[replacementIdx], sizeof(finalStr) + sizeof(key[replacementIdx]));
    }
    return finalStr;
}

/**
 * @brief generates a 2d array to be the encryption key with random letters to replace each letter
 * 
 * @return char** - the encryption key as a 2d array
 */
char** generateKey() {
    srand(time(NULL));
    char** final = (char**)calloc(1, 26 * sizeof(char*));
    for (int i=0; i<26; i++) {
        char* tempStr = (char*)calloc(1, 4 * sizeof(char));
        for (int j=0; j<3; j++) {
            char c = (char)(rand() % 26) + 97;
            tempStr = strncat(tempStr, &c, sizeof(c) + sizeof(tempStr));
        }
        final[i] = tempStr;
    }
    return final;
}

int indexOf(char** arr, int size, char* item) {
    for (int i=0; i<size; i++) {
        if (strcmp(arr[i], item) == 0) return i;
    }
    return -1;
}

char* decrypt(char* str, char** key) {
    char* finalStr = (char*)calloc(1, sizeof(char) * (strlen(str) / 3));
    for (int i=0; i<strlen(str); i += 3) {
        char* tidbit = slice(str, i, 3);
        int charCode = indexOf(key, 26, tidbit);
        char translate = (char)(charCode + 97);
        finalStr = strncat(finalStr, &translate, sizeof(finalStr) + sizeof(char));
    }
    return finalStr;
}

char* slice(char* str, int idx, int amount) {
    char* finalStr = (char*)calloc(1, sizeof(char) * amount);
    for (int i=idx; i<idx+amount; i++) {
        char nextChar = str[i];
        finalStr = strncat(finalStr, &nextChar, sizeof(finalStr) + sizeof(char));
    }
    return finalStr;
}