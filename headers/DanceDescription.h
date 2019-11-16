#pragma once

class DanceDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~DanceDescription();
    virtual ~DanceDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
