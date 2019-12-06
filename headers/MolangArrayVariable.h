#pragma once

class MolangArrayVariable {

public:
    static long MolangArrayVariable::defaultErrorValue;


    void MolangArrayVariable(MolangArrayVariable const&);
    void MolangArrayVariable(HashedString const&);
    void getName(void)const;
    void MolangArrayVariable(MolangArrayVariable&&);
};
