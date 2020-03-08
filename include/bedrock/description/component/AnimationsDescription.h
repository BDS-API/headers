#pragma once

#include "../../../json/Value"


class AnimationsDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual AnimationsDescription::~AnimationsDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AnimationsDescription(void);
    AnimationsDescription(AnimationsDescription&&);
};
