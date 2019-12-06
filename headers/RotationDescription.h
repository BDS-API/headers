#pragma once

class RotationDescription : Description {

public:
    virtual void getJsonName(void)const;
    virtual ~RotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void RotationDescription(void);
    void RotationDescription(Vec2);
};
