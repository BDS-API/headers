#pragma once

class MolangGeometryVariable {

public:
    static long defaultErrorValue;


    void MolangGeometryVariable(MolangGeometryVariable const&);
    void MolangGeometryVariable(HashedString const&);
    void MolangGeometryVariable(MolangGeometryVariable&&);
};
