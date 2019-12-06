#pragma once

class MolangTextureVariable {

public:
    static long MolangTextureVariable::defaultErrorValue;


    void MolangTextureVariable(MolangTextureVariable const&);
    void MolangTextureVariable(HashedString const&);
    void MolangTextureVariable(MolangTextureVariable&&);
};
