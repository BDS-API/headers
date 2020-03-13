#pragma once



class MolangEntityVariable {

public:
    static long defaultErrorValue;

    ~MolangEntityVariable(); // _ZN20MolangEntityVariableD2Ev
    MolangEntityVariable(MolangEntityVariable const&); // _ZN20MolangEntityVariableC2ERKS_
    MolangEntityVariable(HashedString const&); // _ZN20MolangEntityVariableC2ERK12HashedString
    void getName()const; // _ZNK20MolangEntityVariable7getNameEv
    MolangEntityVariable(MolangEntityVariable &&); // _ZN20MolangEntityVariableC2EOS_
    void operator==(MolangEntityVariable const&)const; // _ZNK20MolangEntityVariableeqERKS_
};
