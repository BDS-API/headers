#pragma once

#include "HashedString.h"


class MolangTempVariable {

public:
    static long defaultErrorValue;

    MolangTempVariable(HashedString const&);
    ~MolangTempVariable();
    MolangTempVariable(MolangTempVariable const&);
    void getName()const;
    MolangTempVariable(MolangTempVariable &&);
    void operator==(MolangTempVariable const&)const;
};
