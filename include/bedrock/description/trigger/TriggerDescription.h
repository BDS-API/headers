#pragma once

#include "../../../json/Value.h"
#include "../Description.h"


class TriggerDescription : Description {

public:
    virtual void serializeData(Json::Value &)const;
    ~TriggerDescription();
    virtual void deserializeData(Json::Value &);
    void parseTrigger(Json::Value &);
    TriggerDescription();
};
