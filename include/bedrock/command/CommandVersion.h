#pragma once

#include "../../unmapped/SemVersion.h"


class CommandVersion {

public:
    static long CurrentVersion;

    CommandVersion(int, int);
    void overlaps(CommandVersion const&)const;
    void getVersionMapping(SemVersion const&);
    bool isCompatible(int)const;
};
