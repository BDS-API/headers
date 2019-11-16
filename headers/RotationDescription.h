#pragma once

class RotationDescription : Description {

    virtual void getJsonName(void)const;
    virtual ~RotationDescription();
    virtual ~RotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
