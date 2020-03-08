#pragma once



class ScriptBinderQueryTemplate : ScriptBinderTemplate {

public:
    ScriptBinderQueryTemplate::~ScriptBinderQueryTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(unsigned int);
    ScriptBinderQueryTemplate(void);
};
