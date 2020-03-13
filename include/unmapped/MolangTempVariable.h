#pragma once



class MolangTempVariable {

public:
    static long defaultErrorValue;

    ~MolangTempVariable(); // _ZN18MolangTempVariableD2Ev
    MolangTempVariable(MolangTempVariable const&); // _ZN18MolangTempVariableC2ERKS_
    MolangTempVariable(HashedString const&); // _ZN18MolangTempVariableC2ERK12HashedString
    void getName()const; // _ZNK18MolangTempVariable7getNameEv
    MolangTempVariable(MolangTempVariable &&); // _ZN18MolangTempVariableC2EOS_
    void operator==(MolangTempVariable const&)const; // _ZNK18MolangTempVariableeqERKS_
};
