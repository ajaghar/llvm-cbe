//===-- CBackend.cpp - Library for converting LLVM code to C --------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This code tests to see that the CBE will execute a struct correctly.
//
//===----------------------------------------------------------------------===//

#include <stdio.h>

struct test {
 int var1;
 int var2;
 int var3;
};

int main ()
{
    struct test variable;
    
    variable.var2 = 5;
    variable.var3 = 6;
    variable.var1 = 9;
    
    return variable.var3;
}
