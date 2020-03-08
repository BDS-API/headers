#pragma once



class SnapshotFilenameAndLength {

public:

    SnapshotFilenameAndLength(SnapshotFilenameAndLength&&);
    SnapshotFilenameAndLength(std::string, unsigned long);
};
