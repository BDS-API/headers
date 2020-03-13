#pragma once

#include <string>


class SlotData {

public:
    static long UNKNOWN_LOCATION;

    ~SlotData(); // _ZN8SlotDataD2Ev
    SlotData(SlotData &&); // _ZN8SlotDataC2EOS_
    SlotData(SlotData const&); // _ZN8SlotDataC2ERKS_
    SlotData(); // _ZN8SlotDataC2Ev
    SlotData(std::string &&, int); // _ZN8SlotDataC2EONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    SlotData(std::string const&, int); // _ZN8SlotDataC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void set(std::string const&, int); // _ZN8SlotData3setERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void clear(); // _ZN8SlotData5clearEv
    bool isActive()const; // _ZNK8SlotData8isActiveEv
    void operator==(SlotData const&)const; // _ZNK8SlotDataeqERKS_
};
