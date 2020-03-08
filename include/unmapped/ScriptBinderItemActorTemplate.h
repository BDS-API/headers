#pragma once



class ScriptBinderItemActorTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderItemActorTemplate::~ScriptBinderItemActorTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, ItemActor const&);
    ScriptBinderItemActorTemplate(void);
};
