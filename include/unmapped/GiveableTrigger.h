#pragma once

#include <string>


class GiveableTrigger {

public:
    GiveableTrigger();
    void addItemByName(std::string const&);
    ~GiveableTrigger();
    GiveableTrigger(GiveableTrigger const&);
};
