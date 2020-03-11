#pragma once

#include <string>


class MobEvent {

public:

    MobEvent();
    MobEvent(std::string, std::string, bool);
    bool isEnabled()const;
    void setEnabled(bool);
    bool hasDefaultSet()const;
    std::string getName()const;
    std::string getLocalizableName()const;
    ~MobEvent();
};
