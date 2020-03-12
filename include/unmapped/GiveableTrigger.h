#pragma once

#include <string>


class GiveableTrigger {

public:
    void addItemByName(std::string const&);
    GiveableTrigger(GiveableTrigger const&);
    GiveableTrigger();
    ~GiveableTrigger();
};
