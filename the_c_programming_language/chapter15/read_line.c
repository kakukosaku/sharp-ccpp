//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include "read_line.h"

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)

void read_line() {
    char c;
    int n;
    printf("Input a char!\n");
    for (n = 0; n < LINE_SIZE + 1; n++) {
        c = getchar();
        printf("for do once!\n");
        l[n] = c;
    }
    l[n] = '\0';
}

