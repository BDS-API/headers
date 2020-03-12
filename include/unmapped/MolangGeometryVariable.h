#pragma once



class MolangGeometryVariable {

public:
    static long defaultErrorValue;

    MolangGeometryVariable(HashedString const&);
    MolangGeometryVariable(MolangGeometryVariable &&);
    MolangGeometryVariable(MolangGeometryVariable const&);
    void operator==(MolangGeometryVariable const&)const;
    ~MolangGeometryVariable();
};
