#pragma once



class ScriptBinderLevelTemplate : ScriptBinderTemplate {

public:
    ScriptBinderLevelTemplate::~ScriptBinderLevelTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, unsigned int);
    ScriptBinderLevelTemplate(void);
};
