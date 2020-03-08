#pragma once

#include "../../../json/Value"


class BreakBlocksDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    BreakBlocksDescription::~BreakBlocksDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    BreakBlocksDescription(void);
};
