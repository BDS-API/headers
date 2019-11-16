#pragma once

class ShooterDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~ShooterDescription();
    virtual ~ShooterDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
