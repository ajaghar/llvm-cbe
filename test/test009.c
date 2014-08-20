//===-- CBackend.cpp - Library for converting LLVM code to C --------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This code tests to see that the CBE will execute an array correctly.
//
//===----------------------------------------------------------------------===//

#include <stdio.h>

int main()
{
    int example[10];
    int i;
    for (i = 0;i < 10; ++i)
    {
        example[i] = i;
    }
    
    return example[6];
}
