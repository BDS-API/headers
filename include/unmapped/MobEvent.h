#pragma once

#include <string>


class MobEvent {

public:
    bool hasDefaultSet()const;
    ~MobEvent();
    MobEvent();
    void setEnabled(bool);
    std::string getLocalizableName()const;
    MobEvent(std::string, std::string, bool);
    std::string getName()const;
    bool isEnabled()const;
};
