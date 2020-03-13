#pragma once

#include <string>


class SlotDescriptor {

public:
    ~SlotDescriptor(); // _ZN14SlotDescriptorD2Ev
    void addAcceptedItemByName(std::string const&); // _ZN14SlotDescriptor21addAcceptedItemByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SlotDescriptor(); // _ZN14SlotDescriptorC2Ev
    SlotDescriptor(SlotDescriptor const&); // _ZN14SlotDescriptorC2ERKS_
};
