#pragma once

#include "./HashedString.h"
#include "./MolangTempVariable.h"


class MolangTempVariable {

public:
    static long defaultErrorValue;


    ~MolangTempVariable();
    MolangTempVariable(MolangTempVariable const&);
    MolangTempVariable(HashedString const&);
    void getName()const;
    MolangTempVariable(MolangTempVariable &&);
    void operator==(MolangTempVariable const&)const;
};
