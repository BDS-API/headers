#pragma once

#include "../../actor/ItemActor"


class ScriptBinderItemActorTemplate : ScriptBinderTemplate {

public:
    ScriptBinderItemActorTemplate::~ScriptBinderItemActorTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, ItemActor const&);
    ScriptBinderItemActorTemplate(void);
};
