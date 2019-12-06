#pragma once

class MolangDataDrivenGeometry {

public:
    static long MolangDataDrivenGeometry::defaultErrorValue;


    void MolangDataDrivenGeometry(MolangDataDrivenGeometry const&);
    void MolangDataDrivenGeometry(DataDrivenGeometry *, HashedString const&);
    void MolangDataDrivenGeometry(MolangDataDrivenGeometry&&);
};
