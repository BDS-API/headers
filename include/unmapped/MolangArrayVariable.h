#pragma once



class MolangArrayVariable {

public:
    static long defaultErrorValue;

    ~MolangArrayVariable(); // _ZN19MolangArrayVariableD2Ev
    MolangArrayVariable(MolangArrayVariable const&); // _ZN19MolangArrayVariableC2ERKS_
    MolangArrayVariable(HashedString const&); // _ZN19MolangArrayVariableC2ERK12HashedString
    void getName()const; // _ZNK19MolangArrayVariable7getNameEv
    MolangArrayVariable(MolangArrayVariable &&); // _ZN19MolangArrayVariableC2EOS_
    void operator==(MolangArrayVariable const&)const; // _ZNK19MolangArrayVariableeqERKS_
};
