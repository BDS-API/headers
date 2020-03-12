#pragma once



class MolangMaterialVariable {

public:
    static long defaultErrorValue;

    MolangMaterialVariable(MolangMaterialVariable &&);
    MolangMaterialVariable(HashedString const&);
    ~MolangMaterialVariable();
    void operator==(MolangMaterialVariable const&)const;
    MolangMaterialVariable(MolangMaterialVariable const&);
};
