#pragma once

#include "./MolangMaterialVariable.h"
#include "./HashedString.h"


class MolangMaterialVariable {

public:
    static long defaultErrorValue;


    ~MolangMaterialVariable();
    MolangMaterialVariable(MolangMaterialVariable const&);
    MolangMaterialVariable(HashedString const&);
    MolangMaterialVariable(MolangMaterialVariable &&);
    void operator==(MolangMaterialVariable const&)const;
};
