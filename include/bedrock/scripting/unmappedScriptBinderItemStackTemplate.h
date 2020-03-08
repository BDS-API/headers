#pragma once

#include "../../item/ItemInstance"


class ScriptBinderItemStackTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderItemStackTemplate::~ScriptBinderItemStackTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, ItemInstance const&);
    ScriptBinderItemStackTemplate(void);
};
