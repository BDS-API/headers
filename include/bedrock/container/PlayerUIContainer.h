#pragma once

#include <string>
#include "SimpleContainer.h"


class PlayerUIContainer : public SimpleContainer {

public:
    virtual ~PlayerUIContainer(); // _ZN17PlayerUIContainerD2Ev
    virtual void __fake_function0(); // fake
    PlayerUIContainer(std::string const&, bool, int); // _ZN17PlayerUIContainerC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbi
    void save(); // _ZN17PlayerUIContainer4saveEv
    void load(ListTag const&, SemVersion const&); // _ZN17PlayerUIContainer4loadERK7ListTagRK10SemVersion
};
