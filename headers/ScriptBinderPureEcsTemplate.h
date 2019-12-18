#pragma once

class ScriptBinderPureEcsTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderPureEcsTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, unsigned int);
    void ScriptBinderPureEcsTemplate(void);
};
