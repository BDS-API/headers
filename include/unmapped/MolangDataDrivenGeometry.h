#pragma once

#include "HashedString.h"


class MolangDataDrivenGeometry {

public:
    static long defaultErrorValue;

    MolangDataDrivenGeometry(MolangDataDrivenGeometry const&);
    MolangDataDrivenGeometry(MolangDataDrivenGeometry &&);
    ~MolangDataDrivenGeometry();
//  MolangDataDrivenGeometry(DataDrivenGeometry *, HashedString const&); //TODO: incomplete function definition
    void operator==(MolangDataDrivenGeometry const&)const;
};
