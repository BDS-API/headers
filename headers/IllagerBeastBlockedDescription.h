#pragma once

class IllagerBeastBlockedDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~IllagerBeastBlockedDescription();
    virtual ~IllagerBeastBlockedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
