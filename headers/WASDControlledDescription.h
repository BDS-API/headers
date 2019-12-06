#pragma once

class WASDControlledDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~WASDControlledDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void WASDControlledDescription(void);
};
