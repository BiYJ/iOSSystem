//
//  block2.c
//  Block
//
//  Created by D on 2019/5/3.
//  Copyright © 2019 D. All rights reserved.


#include <stdio.h>

int main() {

    int a = 10;

    void (^block)(void) = ^ {
        printf("Hello world --- %d\n", a);
    };
    block();

    return 1;
}
