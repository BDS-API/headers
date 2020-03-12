#pragma once

#include "HashedString.h"


class MolangEntityVariable {

public:
    static long defaultErrorValue;

    ~MolangEntityVariable();
    MolangEntityVariable(MolangEntityVariable &&);
    MolangEntityVariable(MolangEntityVariable const&);
    void operator==(MolangEntityVariable const&)const;
    void getName()const;
    MolangEntityVariable(HashedString const&);
};
