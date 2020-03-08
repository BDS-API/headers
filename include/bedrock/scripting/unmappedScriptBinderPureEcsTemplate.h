#pragma once



class ScriptBinderPureEcsTemplate : ScriptBinderTemplate {

public:
    ScriptBinderPureEcsTemplate::~ScriptBinderPureEcsTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, unsigned int);
    ScriptBinderPureEcsTemplate(void);
};
