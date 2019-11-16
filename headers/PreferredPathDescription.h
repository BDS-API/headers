#pragma once

class PreferredPathDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~PreferredPathDescription();
    virtual void ~PreferredPathDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
