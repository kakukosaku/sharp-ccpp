//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/04/14.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "abc";
    puts(str1);
    int *p1, *p2, i = 10;
    p1 = &i;
    p2 = p1;
    printf("%d\t%d\n", *p1, *p2);

    char str2[10];
    strcpy(str2, "def");
    puts(str2);

    strcat(str1, str2);
    puts(str1);

    char chr = 97;
    putchar(chr);
    printf("\n");

    char chr2 = '0';
    char chr3 = '\0';
    printf("%d\t%d\n", chr2, chr3);
}
