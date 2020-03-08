#pragma once



class MobEvent {

public:

    MobEvent(void);
    MobEvent(std::string, std::string, bool);
    bool isEnabled()const;
    void setEnabled(bool);
    bool hasDefaultSet()const;
};
