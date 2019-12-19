#pragma once

class ScriptBinderLevelTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderLevelTemplate::~ScriptBinderLevelTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, unsigned int);
    ScriptBinderLevelTemplate(void);
};
