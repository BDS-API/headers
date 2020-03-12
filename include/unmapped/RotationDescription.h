#pragma once

#include "../bedrock/util/Vec2.h"
#include "../bedrock/description/Description.h"


class RotationDescription : Description {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~RotationDescription();
    virtual void serializeData(Json::Value &)const;
    RotationDescription();
    RotationDescription(Vec2);
};
