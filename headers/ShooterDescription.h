#pragma once

class ShooterDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ShooterDescription::~ShooterDescription();
    virtual void ShooterDescription::~ShooterDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
