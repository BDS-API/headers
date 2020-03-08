#pragma once



class MolangGeometryVariable {

public:
    static long defaultErrorValue;


    MolangGeometryVariable(MolangGeometryVariable const&);
    MolangGeometryVariable(HashedString const&);
    MolangGeometryVariable(MolangGeometryVariable&&);
};
