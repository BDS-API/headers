#pragma once

#include <string>


class DamageSensorTrigger {

public:
    ~DamageSensorTrigger();
    DamageSensorTrigger();
    void setCause(std::string const&);
    DamageSensorTrigger(DamageSensorTrigger const&);
};
