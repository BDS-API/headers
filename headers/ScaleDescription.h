#pragma once

class ScaleDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~ScaleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void ScaleDescription(void);
};
