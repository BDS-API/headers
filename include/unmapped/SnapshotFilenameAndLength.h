#pragma once

#include <string>


class SnapshotFilenameAndLength {

public:
    SnapshotFilenameAndLength(SnapshotFilenameAndLength &&);
    SnapshotFilenameAndLength(std::string, unsigned long);
    ~SnapshotFilenameAndLength();
    std::string toString();
};
