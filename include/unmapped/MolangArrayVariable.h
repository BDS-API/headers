#pragma once

class MolangArrayVariable {

public:
    static long defaultErrorValue;


    MolangArrayVariable(MolangArrayVariable const&);
    MolangArrayVariable(HashedString const&);
    void getName(void)const;
    MolangArrayVariable(MolangArrayVariable&&);
};
