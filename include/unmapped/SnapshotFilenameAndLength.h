#pragma once

#include <string>


class SnapshotFilenameAndLength {

public:
    std::string toString(); // _ZN25SnapshotFilenameAndLength8toStringB5cxx11Ev
    ~SnapshotFilenameAndLength(); // _ZN25SnapshotFilenameAndLengthD2Ev
    SnapshotFilenameAndLength(SnapshotFilenameAndLength &&); // _ZN25SnapshotFilenameAndLengthC2EOS_
    SnapshotFilenameAndLength(std::string, unsigned long); // _ZN25SnapshotFilenameAndLengthC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
};
