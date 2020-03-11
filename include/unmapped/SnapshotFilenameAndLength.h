#pragma once

#include "./SnapshotFilenameAndLength.h"
#include <string>


class SnapshotFilenameAndLength {

public:

    std::string toString();
    ~SnapshotFilenameAndLength();
    SnapshotFilenameAndLength(SnapshotFilenameAndLength &&);
    SnapshotFilenameAndLength(std::string, unsigned long);
};
