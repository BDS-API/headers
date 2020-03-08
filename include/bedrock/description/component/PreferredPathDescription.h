#pragma once

#include "../../block/BlockLegacy"
#include "../../../json/Value"


class PreferredPathDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual PreferredPathDescription::~PreferredPathDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    PreferredPathDescription(void);
    PreferredPathDescription(float, float, int);
    bool isBlockAlreadyInSet(BlockLegacy const*)const;
};
