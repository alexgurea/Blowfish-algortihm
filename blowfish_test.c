/*
blowfish_test.c:  Test file for blowfish.c

Copyright (C) 1997 by Paul Kocher

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.
You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

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
