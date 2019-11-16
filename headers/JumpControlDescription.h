#pragma once

class JumpControlDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~JumpControlDescription();
    virtual void ~JumpControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
