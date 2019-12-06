#pragma once

class MolangTempVariable {

public:
    static long MolangTempVariable::defaultErrorValue;


    void MolangTempVariable(MolangTempVariable const&);
    void MolangTempVariable(HashedString const&);
    void getName(void)const;
    void MolangTempVariable(MolangTempVariable&&);
};
