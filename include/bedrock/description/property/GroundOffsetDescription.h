#pragma once

#include "../../../json/Value"


class GroundOffsetDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    GroundOffsetDescription::~GroundOffsetDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    GroundOffsetDescription(void);
};
