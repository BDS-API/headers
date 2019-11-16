#pragma once

class TimerDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~TimerDescription();
    virtual void ~TimerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
