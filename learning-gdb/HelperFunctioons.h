//
// Created by luther on 6/10/20.
//

#ifndef LEARNING_GDB_HELPERFUNCTIOONS_H
#define LEARNING_GDB_HELPERFUNCTIOONS_H

#include <stdio.h>
#include <stdlib.h>

void printString(const char* str2print) {
    fprintf(stderr,"the string is %s", str2print);
    fprintf(stderr, "the string length is %d\n", strlen(str2print));
}

#endif //LEARNING_GDB_HELPERFUNCTIOONS_H
