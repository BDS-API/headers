#pragma once

#include "./CommandVersion.h"
#include "../../unmapped/SemVersion.h"


class CommandVersion {

public:
    static long CurrentVersion;


    void getVersionMapping(SemVersion const&);
    CommandVersion(int, int);
    bool isCompatible(int)const;
    void overlaps(CommandVersion const&)const;
};
