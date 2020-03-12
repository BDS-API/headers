#pragma once

#include "../Description.h"


class TriggerDescription : Description {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~TriggerDescription();
    void parseTrigger(Json::Value &);
    TriggerDescription();
};
