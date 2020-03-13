#pragma once



class MolangDataDrivenGeometry {

public:
    static long defaultErrorValue;

    ~MolangDataDrivenGeometry(); // _ZN24MolangDataDrivenGeometryD2Ev
    MolangDataDrivenGeometry(MolangDataDrivenGeometry const&); // _ZN24MolangDataDrivenGeometryC2ERKS_
//  MolangDataDrivenGeometry(DataDrivenGeometry *, HashedString const&); //TODO: incomplete function definition // _ZN24MolangDataDrivenGeometryC2EP18DataDrivenGeometryRK12HashedString
    MolangDataDrivenGeometry(MolangDataDrivenGeometry &&); // _ZN24MolangDataDrivenGeometryC2EOS_
    void operator==(MolangDataDrivenGeometry const&)const; // _ZNK24MolangDataDrivenGeometryeqERKS_
};
