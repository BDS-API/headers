#pragma once



class MolangTempVariable {

public:
    static long defaultErrorValue;

    void getName()const;
    ~MolangTempVariable();
    MolangTempVariable(HashedString const&);
    MolangTempVariable(MolangTempVariable const&);
    MolangTempVariable(MolangTempVariable &&);
    void operator==(MolangTempVariable const&)const;
};
