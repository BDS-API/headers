#pragma once



class MolangDataDrivenGeometry {

public:
    static long defaultErrorValue;


    MolangDataDrivenGeometry(MolangDataDrivenGeometry const&);
    MolangDataDrivenGeometry(DataDrivenGeometry *, HashedString const&);
    MolangDataDrivenGeometry(MolangDataDrivenGeometry&&);
};
