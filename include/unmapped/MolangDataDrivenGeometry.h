#pragma once

#include "./HashedString.h"
#include "./MolangDataDrivenGeometry.h"


class MolangDataDrivenGeometry {

public:
    static long defaultErrorValue;


    ~MolangDataDrivenGeometry();
    MolangDataDrivenGeometry(MolangDataDrivenGeometry const&);
//  MolangDataDrivenGeometry(DataDrivenGeometry *, HashedString const&); //TODO: incomplete function definition
    MolangDataDrivenGeometry(MolangDataDrivenGeometry &&);
    void operator==(MolangDataDrivenGeometry const&)const;
};
