#pragma once

#include "../nbt/ListTag"
#include "../../unmapped/SemVersion"


class PlayerUIContainer : SimpleContainer {

public:
    PlayerUIContainer::~PlayerUIContainer()

    PlayerUIContainer(std::string const&, bool, int);
    void save();
    void load(ListTag const&, SemVersion const&);
};
