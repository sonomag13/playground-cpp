//
// Created by luther on 5/28/20.
//

#include "OpaquePointer.h"

typedef struct OpaquePointer {
    int val;
} OpaquePointer_t;

OpaquePointer_t* createOpqPtr (int valIn) {
    OpaquePointer_t* ret;
    ret->val = valIn;
    return ret;
}

int getVal(OpaquePointer_t* opqPtr) {
    return opqPtr->val;
}