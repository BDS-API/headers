#pragma once

#include "../../actor/Actor"


class ScriptBinderActorTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderActorTemplate::~ScriptBinderActorTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, Actor const&);
    ScriptBinderActorTemplate(void);
};
