#pragma once

#include "../Description.h"
#include "../../../json/Value.h"


class TriggerDescription : Description {

public:
    virtual ~TriggerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TriggerDescription();
    void parseTrigger(Json::Value &);
};
