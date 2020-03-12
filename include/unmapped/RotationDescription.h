#pragma once

#include "../bedrock/util/Vec2.h"
#include "../bedrock/description/Description.h"
#include "../json/Value.h"


class RotationDescription : Description {

public:
    ~RotationDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    RotationDescription(Vec2);
    RotationDescription();
};
