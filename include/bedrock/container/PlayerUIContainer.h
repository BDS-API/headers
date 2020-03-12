#pragma once

#include <string>
#include "SimpleContainer.h"


class PlayerUIContainer : SimpleContainer {

public:
    ~PlayerUIContainer();
    PlayerUIContainer(std::string const&, bool, int);
    void load(ListTag const&, SemVersion const&);
    void save();
};
