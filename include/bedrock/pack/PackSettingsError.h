#pragma once

#include <string>
#include "PackError.h"
#include <vector>


class PackSettingsError : PackError {

public:
    ~PackSettingsError(); // _ZN17PackSettingsErrorD2Ev
    virtual std::string getLocErrorMessage()const; // _ZNK17PackSettingsError18getLocErrorMessageB5cxx11Ev
    virtual std::string getLocErrorMessageMap()const; // _ZNK17PackSettingsError21getLocErrorMessageMapB5cxx11Ev
    virtual std::string getEventErrorMessageMap()const; // _ZNK17PackSettingsError23getEventErrorMessageMapB5cxx11Ev
    PackSettingsError(PackSettingsError const&); // _ZN17PackSettingsErrorC2ERKS_
    PackSettingsError(); // _ZN17PackSettingsErrorC2Ev
    PackSettingsError(std::vector<std::string> const&); // _ZN17PackSettingsErrorC2ERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
};
