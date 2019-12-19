#pragma once

class MolangTempVariable {

public:
    static long defaultErrorValue;


    void MolangTempVariable(MolangTempVariable const&);
    void MolangTempVariable(HashedString const&);
    void getName(void)const;
    void MolangTempVariable(MolangTempVariable&&);
};
