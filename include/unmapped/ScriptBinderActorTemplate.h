#pragma once

class ScriptBinderActorTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderActorTemplate::~ScriptBinderActorTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, Actor const&);
    ScriptBinderActorTemplate(void);
};
