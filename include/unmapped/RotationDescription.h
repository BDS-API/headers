#pragma once

#include "../bedrock/description/Description.h"
#include "../bedrock/util/Vec2.h"
#include "../json/Value.h"


class RotationDescription : Description {

public:
    virtual void getJsonName()const;
    virtual ~RotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    RotationDescription();
    RotationDescription(Vec2);
};
