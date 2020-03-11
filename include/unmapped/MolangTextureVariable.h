#pragma once

#include "./MolangTextureVariable.h"
#include "./HashedString.h"


class MolangTextureVariable {

public:
    static long defaultErrorValue;


    ~MolangTextureVariable();
    MolangTextureVariable(MolangTextureVariable const&);
    MolangTextureVariable(HashedString const&);
    MolangTextureVariable(MolangTextureVariable &&);
    void operator==(MolangTextureVariable const&)const;
};
