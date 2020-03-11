#pragma once

#include "./HashedString.h"
#include "./MolangArrayVariable.h"


class MolangArrayVariable {

public:
    static long defaultErrorValue;


    ~MolangArrayVariable();
    MolangArrayVariable(MolangArrayVariable const&);
    MolangArrayVariable(HashedString const&);
    void getName()const;
    MolangArrayVariable(MolangArrayVariable &&);
    void operator==(MolangArrayVariable const&)const;
};
