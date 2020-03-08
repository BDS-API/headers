#pragma once

#include "../Description"
#include "../../../json/Value"


class TriggerDescription : Description {

public:
    virtual TriggerDescription::~TriggerDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TriggerDescription(void);
    void parseTrigger(Json::Value &);
};
