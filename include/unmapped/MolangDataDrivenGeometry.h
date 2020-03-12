#pragma once



class MolangDataDrivenGeometry {

public:
    static long defaultErrorValue;

    ~MolangDataDrivenGeometry();
    MolangDataDrivenGeometry(MolangDataDrivenGeometry const&);
    MolangDataDrivenGeometry(MolangDataDrivenGeometry &&);
    void operator==(MolangDataDrivenGeometry const&)const;
//  MolangDataDrivenGeometry(DataDrivenGeometry *, HashedString const&); //TODO: incomplete function definition
};
