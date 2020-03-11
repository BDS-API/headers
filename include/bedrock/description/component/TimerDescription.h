#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class TimerDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~TimerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TimerDescription();
};
