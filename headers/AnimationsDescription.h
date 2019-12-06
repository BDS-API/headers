#pragma once

class AnimationsDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~AnimationsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void AnimationsDescription(void);
    void AnimationsDescription(AnimationsDescription&&);
};
