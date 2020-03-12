#pragma once

#include "ComponentDescription.h"


class PreferredPathDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    ~PreferredPathDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    PreferredPathDescription(float, float, int);
    PreferredPathDescription();
    bool isBlockAlreadyInSet(BlockLegacy const*)const;
};
