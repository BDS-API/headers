#pragma once

#include "./DamageSensorTrigger.h"
#include <string>


class DamageSensorTrigger {

public:

    ~DamageSensorTrigger();
    void setCause(std::string const&);
    DamageSensorTrigger();
    DamageSensorTrigger(DamageSensorTrigger const&);
};
