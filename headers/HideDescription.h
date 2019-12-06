#pragma once

class HideDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~HideDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void HideDescription(void);
};
