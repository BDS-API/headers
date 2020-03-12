#pragma once

#include "HashedString.h"


class MolangGeometryVariable {

public:
    static long defaultErrorValue;

    MolangGeometryVariable(MolangGeometryVariable &&);
    ~MolangGeometryVariable();
    MolangGeometryVariable(MolangGeometryVariable const&);
    void operator==(MolangGeometryVariable const&)const;
    MolangGeometryVariable(HashedString const&);
};
