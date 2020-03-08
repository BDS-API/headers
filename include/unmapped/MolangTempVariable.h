#pragma once



class MolangTempVariable {

public:
    static long defaultErrorValue;


    MolangTempVariable(MolangTempVariable const&);
    MolangTempVariable(HashedString const&);
    void getName()const;
    MolangTempVariable(MolangTempVariable&&);
};
