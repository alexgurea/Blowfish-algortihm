
#include <stdio.h>
#include "blowfish.h"


void main(void) {
    unsigned long L = 89898989, R =561651651;
    BLOWFISH_CTX ctx;
printf("CRIPTARE.\n");
    Blowfish_Init(&ctx, (unsigned char*)"TESTKEY", 7);
    Blowfish_Encrypt1(&ctx, &L, &R);
    //printf("%08lX %08lX\n", L, R);


    printf("DECRIPTARE.\n");

    Blowfish_Decrypt(&ctx, &L, &R);



}
