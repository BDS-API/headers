#pragma once



class MolangTempVariable {

public:
    static long defaultErrorValue;


    MolangTempVariable(MolangTempVariable const&);
    MolangTempVariable(HashedString const&);
    void getName(void)const;
    MolangTempVariable(MolangTempVariable&&);
};
