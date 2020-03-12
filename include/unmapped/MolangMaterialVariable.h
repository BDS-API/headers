#pragma once

#include "HashedString.h"


class MolangMaterialVariable {

public:
    static long defaultErrorValue;

    MolangMaterialVariable(MolangMaterialVariable const&);
    ~MolangMaterialVariable();
    void operator==(MolangMaterialVariable const&)const;
    MolangMaterialVariable(HashedString const&);
    MolangMaterialVariable(MolangMaterialVariable &&);
};
