#pragma once



class CommandVersion {

public:
    static long CurrentVersion;

    void getVersionMapping(SemVersion const&); // _ZN14CommandVersion17getVersionMappingERK10SemVersion
    CommandVersion(int, int); // _ZN14CommandVersionC2Eii
    bool isCompatible(int)const; // _ZNK14CommandVersion12isCompatibleEi
    void overlaps(CommandVersion const&)const; // _ZNK14CommandVersion8overlapsERKS_
};
