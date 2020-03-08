#pragma once



class MolangEntityVariable {

public:
    static long defaultErrorValue;


    MolangEntityVariable(MolangEntityVariable const&);
    MolangEntityVariable(HashedString const&);
    void getName()const;
    MolangEntityVariable(MolangEntityVariable&&);
};
