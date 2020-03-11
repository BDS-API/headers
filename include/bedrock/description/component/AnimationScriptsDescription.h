#pragma once

#include "./AnimationScriptsDescription.h"
#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class AnimationScriptsDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~AnimationScriptsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AnimationScriptsDescription();
    AnimationScriptsDescription(AnimationScriptsDescription &&);
};
