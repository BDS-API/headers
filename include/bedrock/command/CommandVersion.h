#pragma once



class CommandVersion {

public:
    static long CurrentVersion;

    void overlaps(CommandVersion const&)const;
    void getVersionMapping(SemVersion const&);
    bool isCompatible(int)const;
    CommandVersion(int, int);
};
