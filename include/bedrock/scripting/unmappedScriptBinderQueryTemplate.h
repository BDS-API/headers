#pragma once



class ScriptBinderQueryTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderQueryTemplate::~ScriptBinderQueryTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(unsigned int);
    ScriptBinderQueryTemplate(void);
};
