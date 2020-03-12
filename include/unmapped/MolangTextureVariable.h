#pragma once



class MolangTextureVariable {

public:
    static long defaultErrorValue;

    void operator==(MolangTextureVariable const&)const;
    MolangTextureVariable(MolangTextureVariable const&);
    ~MolangTextureVariable();
    MolangTextureVariable(MolangTextureVariable &&);
    MolangTextureVariable(HashedString const&);
};
