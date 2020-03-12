#pragma once

#include <string>


class DamageSensorTrigger {

public:
    DamageSensorTrigger();
    ~DamageSensorTrigger();
    DamageSensorTrigger(DamageSensorTrigger const&);
    void setCause(std::string const&);
};
