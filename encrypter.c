#include "encrypter.h"

char* dictionary[26][4] = {"aay", "bee", "see", "dee", "eee", "eff", "gee", "hct", "aye", "jay", "kay", "ell", "emm", "enn", "ohh", "pee", "que", "are", "ess", "tee", "you", "vee", "dub", "exx", "why", "zee"};

int main() {
    printf("Hello, World!\n");
    for (int i=0; i<26; i++) {
        printf("%s\n", dictionary[0][i]);
    }
}


