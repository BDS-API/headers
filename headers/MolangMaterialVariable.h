#pragma once

class MolangMaterialVariable {

public:
    static long MolangMaterialVariable::defaultErrorValue;


    void MolangMaterialVariable(MolangMaterialVariable const&);
    void MolangMaterialVariable(HashedString const&);
    void MolangMaterialVariable(MolangMaterialVariable&&);
};
