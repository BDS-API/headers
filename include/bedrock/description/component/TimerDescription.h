#pragma once

#include "ComponentDescription.h"


class TimerDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~TimerDescription();
    TimerDescription();
};
