#pragma once

class MolangArrayVariable {

public:
    static long defaultErrorValue;


    void MolangArrayVariable(MolangArrayVariable const&);
    void MolangArrayVariable(HashedString const&);
    void getName(void)const;
    void MolangArrayVariable(MolangArrayVariable&&);
};
