#pragma once

#include "HashedString.h"


class MolangArrayVariable {

public:
    static long defaultErrorValue;

    void getName()const;
    void operator==(MolangArrayVariable const&)const;
    MolangArrayVariable(MolangArrayVariable const&);
    ~MolangArrayVariable();
    MolangArrayVariable(MolangArrayVariable &&);
    MolangArrayVariable(HashedString const&);
};
