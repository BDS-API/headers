#pragma once

class GroundOffsetDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual GroundOffsetDescription::~GroundOffsetDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    GroundOffsetDescription(void);
};
