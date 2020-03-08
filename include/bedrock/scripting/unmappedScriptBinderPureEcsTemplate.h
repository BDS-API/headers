#pragma once



class ScriptBinderPureEcsTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderPureEcsTemplate::~ScriptBinderPureEcsTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, unsigned int);
    ScriptBinderPureEcsTemplate(void);
};
