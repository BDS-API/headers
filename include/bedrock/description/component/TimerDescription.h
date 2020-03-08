#pragma once

#include "../../../json/Value"


class TimerDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual TimerDescription::~TimerDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TimerDescription(void);
};
