#pragma once

class CommandVersion {

public:
    static long CommandVersion::CurrentVersion;


    void getVersionMapping(SemVersion const&);
    void CommandVersion(int, int);
    bool isCompatible(int)const;
    void overlaps(CommandVersion const&)const;
};
