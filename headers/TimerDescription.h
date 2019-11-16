#pragma once

class TimerDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void TimerDescription::~TimerDescription();
    virtual void TimerDescription::~TimerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
