//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/04/14.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

int main() {
    char s[] = "Hsjodi", *p;

    for (p=&s[5]; p >= s; p--) --*p;
    puts(s);
    return 0;
}
