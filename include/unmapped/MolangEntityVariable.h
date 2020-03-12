#pragma once



class MolangEntityVariable {

public:
    static long defaultErrorValue;

    ~MolangEntityVariable();
    void operator==(MolangEntityVariable const&)const;
    MolangEntityVariable(MolangEntityVariable &&);
    MolangEntityVariable(HashedString const&);
    MolangEntityVariable(MolangEntityVariable const&);
    void getName()const;
};
