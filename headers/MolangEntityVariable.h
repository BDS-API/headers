#pragma once

class MolangEntityVariable {

public:
    static long defaultErrorValue;


    void MolangEntityVariable(MolangEntityVariable const&);
    void MolangEntityVariable(HashedString const&);
    void getName(void)const;
    void MolangEntityVariable(MolangEntityVariable&&);
};
