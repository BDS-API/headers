#pragma once

#include "../../block/BlockLegacy.h"
#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class PreferredPathDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~PreferredPathDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    PreferredPathDescription();
    PreferredPathDescription(float, float, int);
    bool isBlockAlreadyInSet(BlockLegacy const*)const;
};
