//
// Created by luther on 5/28/20.
//

#include <stdio.h>
#include <stdlib.h>

#pragma once

typedef struct OpaquePointer OpaquePointer_t;
OpaquePointer_t* createOpqPtr(int valIn);
int getVal(OpaquePointer_t* opqPtr);