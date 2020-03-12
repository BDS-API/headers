#pragma once

#include "HashedString.h"


class MolangTextureVariable {

public:
    static long defaultErrorValue;

    MolangTextureVariable(MolangTextureVariable &&);
    MolangTextureVariable(HashedString const&);
    MolangTextureVariable(MolangTextureVariable const&);
    ~MolangTextureVariable();
    void operator==(MolangTextureVariable const&)const;
};
