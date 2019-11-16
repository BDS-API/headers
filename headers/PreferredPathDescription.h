#pragma once

class PreferredPathDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~PreferredPathDescription();
    virtual ~PreferredPathDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
