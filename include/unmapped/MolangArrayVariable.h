#pragma once



class MolangArrayVariable {

public:
    static long defaultErrorValue;

    MolangArrayVariable(MolangArrayVariable const&);
    ~MolangArrayVariable();
    void operator==(MolangArrayVariable const&)const;
    MolangArrayVariable(MolangArrayVariable &&);
    MolangArrayVariable(HashedString const&);
    void getName()const;
};
