#pragma once

class IllagerBeastBlockedDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~IllagerBeastBlockedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void IllagerBeastBlockedDescription(void);
};
