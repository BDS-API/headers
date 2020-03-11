#pragma once

#include "./MolangGeometryVariable.h"
#include "./HashedString.h"


class MolangGeometryVariable {

public:
    static long defaultErrorValue;


    ~MolangGeometryVariable();
    MolangGeometryVariable(MolangGeometryVariable const&);
    MolangGeometryVariable(HashedString const&);
    MolangGeometryVariable(MolangGeometryVariable &&);
    void operator==(MolangGeometryVariable const&)const;
};
