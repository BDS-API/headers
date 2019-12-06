#pragma once

class ShooterDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~ShooterDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void ShooterDescription(void);
};
