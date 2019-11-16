#pragma once

class IsIllagerCaptainDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~IsIllagerCaptainDescription();
    virtual void ~IsIllagerCaptainDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
