#pragma once

#include "./GiveableTrigger.h"
#include <string>


class GiveableTrigger {

public:

    void addItemByName(std::string const&);
    GiveableTrigger();
    ~GiveableTrigger();
    GiveableTrigger(GiveableTrigger const&);
};
