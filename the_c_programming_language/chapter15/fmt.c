//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/04/14.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

#include "print_line.h"
#include "read_line.h"

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)


int main() {
    PRINT_STR("Please convince function is executed!");
    read_line();
    PRINT_LINE(l);
}
