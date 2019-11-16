#pragma once

class JumpControlDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~JumpControlDescription();
    virtual ~JumpControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
