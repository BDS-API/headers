#pragma once

#include "SimpleContainer.h"
#include <string>
#include "../nbt/ListTag.h"
#include "../../unmapped/SemVersion.h"


class PlayerUIContainer : SimpleContainer {

public:
    ~PlayerUIContainer();
    void save();
    PlayerUIContainer(std::string const&, bool, int);
    void load(ListTag const&, SemVersion const&);
};
