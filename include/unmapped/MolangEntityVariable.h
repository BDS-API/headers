#pragma once

#include "./MolangEntityVariable.h"
#include "./HashedString.h"


class MolangEntityVariable {

public:
    static long defaultErrorValue;


    ~MolangEntityVariable();
    MolangEntityVariable(MolangEntityVariable const&);
    MolangEntityVariable(HashedString const&);
    void getName()const;
    MolangEntityVariable(MolangEntityVariable &&);
    void operator==(MolangEntityVariable const&)const;
};
