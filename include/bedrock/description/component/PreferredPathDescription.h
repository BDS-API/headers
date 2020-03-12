#pragma once

#include "../../../json/Value.h"
#include "../../block/BlockLegacy.h"
#include "ComponentDescription.h"


class PreferredPathDescription : ComponentDescription {

public:
    ~PreferredPathDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    PreferredPathDescription();
    PreferredPathDescription(float, float, int);
    bool isBlockAlreadyInSet(BlockLegacy const*)const;
};
