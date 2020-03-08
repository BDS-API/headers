#pragma once



class MolangTextureVariable {

public:
    static long defaultErrorValue;


    MolangTextureVariable(MolangTextureVariable const&);
    MolangTextureVariable(HashedString const&);
    MolangTextureVariable(MolangTextureVariable&&);
};
