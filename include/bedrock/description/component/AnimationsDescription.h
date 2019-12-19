#pragma once

class AnimationsDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual AnimationsDescription::~AnimationsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AnimationsDescription(void);
    AnimationsDescription(AnimationsDescription&&);
};
