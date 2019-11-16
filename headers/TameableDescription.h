#pragma once

class TameableDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~TameableDescription();
    virtual ~TameableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
