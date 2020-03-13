#pragma once

#include <string>


class MobEvent {

public:
    MobEvent(); // _ZN8MobEventC2Ev
    MobEvent(std::string, std::string, bool); // _ZN8MobEventC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_b
    bool isEnabled()const; // _ZNK8MobEvent9isEnabledEv
    void setEnabled(bool); // _ZN8MobEvent10setEnabledEb
    bool hasDefaultSet()const; // _ZNK8MobEvent13hasDefaultSetEv
    std::string getName()const; // _ZNK8MobEvent7getNameB5cxx11Ev
    std::string getLocalizableName()const; // _ZNK8MobEvent18getLocalizableNameB5cxx11Ev
    ~MobEvent(); // _ZN8MobEventD2Ev
};
