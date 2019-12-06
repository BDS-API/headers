#pragma once

class WalkAnimationSpeedDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~WalkAnimationSpeedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void WalkAnimationSpeedDescription(void);
};
