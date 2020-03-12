#pragma once

#include <string>


class SnapshotFilenameAndLength {

public:
    SnapshotFilenameAndLength(std::string, unsigned long);
    ~SnapshotFilenameAndLength();
    std::string toString();
    SnapshotFilenameAndLength(SnapshotFilenameAndLength &&);
};
