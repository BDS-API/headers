#pragma once



class MolangMaterialVariable {

public:
    static long defaultErrorValue;

    ~MolangMaterialVariable(); // _ZN22MolangMaterialVariableD2Ev
    MolangMaterialVariable(MolangMaterialVariable const&); // _ZN22MolangMaterialVariableC2ERKS_
    MolangMaterialVariable(HashedString const&); // _ZN22MolangMaterialVariableC2ERK12HashedString
    MolangMaterialVariable(MolangMaterialVariable &&); // _ZN22MolangMaterialVariableC2EOS_
    void operator==(MolangMaterialVariable const&)const; // _ZNK22MolangMaterialVariableeqERKS_
};
