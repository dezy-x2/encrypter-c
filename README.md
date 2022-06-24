# encrypter-c


#### Updates
- 6.23.2022: After sitting on a plane for too long I finally got the encrypter to work at a very basic level for now. Essentially it can only encode letters a-z lower case with a static encryption key for all encryptions. I plan on fixing this by making a function to generate a random encryption key that will then work for all ASCII characters this will be super cool if I get it to work right because then there will be no central list with all the characters like there was in my previous version. Instead we will just get the encryption key dynamically generated and we will index it based off of the ASCII code of the char that we are encrypting at that moment. I'm very excited!
- 6.24.2022: Working on the `generateKey()` function and it still needs work because there's some sort of error when the key is stored in the array. I'm working on it though I just need to keep at it. :)