#pragma once

#include <string>


class MobEvent {

public:
    MobEvent(std::string, std::string, bool);
    void setEnabled(bool);
    std::string getLocalizableName()const;
    ~MobEvent();
    bool hasDefaultSet()const;
    bool isEnabled()const;
    std::string getName()const;
    MobEvent();
};
