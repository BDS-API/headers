#pragma once

#include <string>
#include "../core/Path.h"


class FileInfo {

public:
    FileInfo(Core::Path, int, std::string); // _ZN8FileInfoC2EN4Core4PathEiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ~FileInfo(); // _ZN8FileInfoD2Ev
    void valid()const; // _ZNK8FileInfo5validEv
    FileInfo(FileInfo &&); // _ZN8FileInfoC2EOS_
};
