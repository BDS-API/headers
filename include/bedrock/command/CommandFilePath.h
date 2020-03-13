#pragma once

#include <string>


class CommandFilePath {

public:
    CommandFilePath(); // _ZN15CommandFilePathC2Ev
    CommandFilePath(std::string const&); // _ZN15CommandFilePathC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void operator==(CommandFilePath const&)const; // _ZNK15CommandFilePatheqERKS_
    std::string getText()const; // _ZNK15CommandFilePath7getTextB5cxx11Ev
    ~CommandFilePath(); // _ZN15CommandFilePathD2Ev
};
