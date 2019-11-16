#pragma once

class TimerDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~TimerDescription();
    virtual ~TimerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
