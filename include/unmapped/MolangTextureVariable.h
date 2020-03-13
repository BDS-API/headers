#pragma once



class MolangTextureVariable {

public:
    static long defaultErrorValue;

    ~MolangTextureVariable(); // _ZN21MolangTextureVariableD2Ev
    MolangTextureVariable(MolangTextureVariable const&); // _ZN21MolangTextureVariableC2ERKS_
    MolangTextureVariable(HashedString const&); // _ZN21MolangTextureVariableC2ERK12HashedString
    MolangTextureVariable(MolangTextureVariable &&); // _ZN21MolangTextureVariableC2EOS_
    void operator==(MolangTextureVariable const&)const; // _ZNK21MolangTextureVariableeqERKS_
};
