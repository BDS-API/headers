#pragma once



class MolangMaterialVariable {

public:
    static long defaultErrorValue;


    MolangMaterialVariable(MolangMaterialVariable const&);
    MolangMaterialVariable(HashedString const&);
    MolangMaterialVariable(MolangMaterialVariable&&);
};
