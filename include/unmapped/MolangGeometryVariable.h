#pragma once



class MolangGeometryVariable {

public:
    static long defaultErrorValue;

    ~MolangGeometryVariable(); // _ZN22MolangGeometryVariableD2Ev
    MolangGeometryVariable(MolangGeometryVariable const&); // _ZN22MolangGeometryVariableC2ERKS_
    MolangGeometryVariable(HashedString const&); // _ZN22MolangGeometryVariableC2ERK12HashedString
    MolangGeometryVariable(MolangGeometryVariable &&); // _ZN22MolangGeometryVariableC2EOS_
    void operator==(MolangGeometryVariable const&)const; // _ZNK22MolangGeometryVariableeqERKS_
};
