# encrypter-c


#### Updates
- 6.23.2022: After sitting on a plane for too long I finally got the encrypter to work at a very basic level for now. Essentially it can only encode letters a-z lower case with a static encryption key for all encryptions. I plan on fixing this by making a function to generate a random encryption key that will then work for all ASCII characters this will be super cool if I get it to work right because then there will be no central list with all the characters like there was in my previous version. Instead we will just get the encryption key dynamically generated and we will index it based off of the ASCII code of the char that we are encrypting at that moment. I'm very excited!
- 6.24.2022: Working on the `generateKey()` function and it still needs work because there's some sort of error when the key is stored in the array. I'm working on it though I just need to keep at it. :)
- 6.25.2022: Today I worked on the `generateKey()` function and I finally got it to work. It was a very simple error I was using `sizeof()` wrong which just screwed up the whole array. Other than that not much else happened today besides some small adjustements to the math and the way I was creating some variables. Tomorrow I hope to work on either the decrypter or the `generateKey()` checker since there is the chance that it will generate the same key for different chars. Anywas things are looking good so far.
- 6.26.2022: Forgot to type this up yesterday but I'll remember what I can. I wrote the `indexOf()` function yesterday which we will need for `decrypt()` so that we can figure out what index a certain key str is at. I also started work on `decrypt()` but I realized that I would need a function to slice a certain amount of chars off into a new str so I started building that. I hit a weird error (as all of them are) that took me until today (6.27.2022) to fix.
- 6.27.2022: Not as much progress as I wanted today. I'm still working on `decrypt()` but I'm having errors and I don't know quite whats wrong but hopefully I sort it out soon. Also I won't be able to work on this quite as constantly since I have work again now.