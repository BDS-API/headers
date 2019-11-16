#pragma once

class WalkAnimationSpeedDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~WalkAnimationSpeedDescription();
    virtual ~WalkAnimationSpeedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
