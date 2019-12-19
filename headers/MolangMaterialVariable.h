#pragma once

class MolangMaterialVariable {

public:
    static long defaultErrorValue;


    void MolangMaterialVariable(MolangMaterialVariable const&);
    void MolangMaterialVariable(HashedString const&);
    void MolangMaterialVariable(MolangMaterialVariable&&);
};
