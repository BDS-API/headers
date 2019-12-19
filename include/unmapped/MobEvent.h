#pragma once

class MobEvent {

public:

    MobEvent(void);
    MobEvent(std::string, std::string, bool);
    bool isEnabled(void)const;
    void setEnabled(bool);
    bool hasDefaultSet(void)const;
};
