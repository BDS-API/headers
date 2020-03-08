#pragma once

#include "../bedrock/description/Description"
#include "../json/Value"
#include "../bedrock/util/Vec2"


class RotationDescription : Description {

public:
    virtual void getJsonName()const;
    virtual RotationDescription::~RotationDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    RotationDescription(void);
    RotationDescription(Vec2);
};
