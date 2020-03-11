#pragma once

#include "./AnimationsDescription.h"
#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class AnimationsDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~AnimationsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AnimationsDescription();
    AnimationsDescription(AnimationsDescription &&);
};
