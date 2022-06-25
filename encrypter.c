#include "encrypter.h"

char* dictionary[26][4] = {"aay", "bee", "see", "dee", "eee", "eff", "gee", "hct", "aye", "jay", "kay", "ell", "emm", "enn", "ohh", "pee", "que", "are", "ess", "tee", "you", "vee", "dub", "exx", "why", "zee"};

int main() {
    printf("Hello, World!\n");
    // for (int i=0; i<26; i++) {
    //     printf("%s\n", dictionary[0][i]);
    // }

    // char* encrypted = encrypt("danieldesmond");
    // printf("%s\n", encrypted);

    char** newDict = generateKey();
    for (int j=0; j<26; j++) {
        printf("%d: %s\n",j, newDict[j]);
    }
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
char* encrypt(char* str) {
    char* finalStr = (char*)calloc(1, sizeof(3 * strlen(str)));
    for (int i=0; i<strlen(str); i++) {
        int replacementIdx = getCharCode(str[i]);
        finalStr = strncat(finalStr, dictionary[0][replacementIdx], sizeof(finalStr) + sizeof(dictionary[0][replacementIdx]));
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
    char** final = (char**)calloc(1, sizeof(26 * 4 * sizeof(char*)));
    for (int i=0; i<26; i++) {
        // printf("\t%d\n", i);
        char* tempStr = (char*)calloc(1, 4*sizeof(char));
        for (int j=0; j<3; j++) {
            // printf("\t\t%d\n", j);
            char c = (char)(rand() % 26) + 97;
            // printf("\t\tln: 39\n");
            tempStr = strncat(tempStr, &c, sizeof(c) + sizeof(tempStr));
            // printf("%d: %s\n", i, tempStr);
            // printf("\t\tln: 41\n");
        }
        // printf("\tln: 43\n");
        final[i] = tempStr;
        printf("%d: %s\n", i, final[i]);
        // printf("\tln: 45\n");
    }
    printf("!!!!!!!!!!!%s\n", final[0]);
    printf("===================================\n");
    for (int i=0; i<26; i++) {
        printf("%d: %s\n", i, final[i]);
    }
    printf("===================================\n");
    return final;
}
