#pragma once

class GroundOffsetDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~GroundOffsetDescription();
    virtual void ~GroundOffsetDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
