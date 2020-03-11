#pragma once

#include "../../unmapped/SemVersion.h"
#include "./SimpleContainer.h"
#include "../nbt/ListTag.h"
#include <string>


class PlayerUIContainer : SimpleContainer {

public:
    virtual ~PlayerUIContainer();

    PlayerUIContainer(std::string const&, bool, int);
    void save();
    void load(ListTag const&, SemVersion const&);
};
