#pragma once

#include "../Description.h"


class TriggerDescription : Description {

public:
    ~TriggerDescription(); // _ZN18TriggerDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN18TriggerDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK18TriggerDescription13serializeDataERN4Json5ValueE
    TriggerDescription(); // _ZN18TriggerDescriptionC2Ev
    void parseTrigger(Json::Value &); // _ZN18TriggerDescription12parseTriggerERN4Json5ValueE
};
