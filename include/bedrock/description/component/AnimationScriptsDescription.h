#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class AnimationScriptsDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~AnimationScriptsDescription();
    AnimationScriptsDescription();
    AnimationScriptsDescription(AnimationScriptsDescription &&);
};
