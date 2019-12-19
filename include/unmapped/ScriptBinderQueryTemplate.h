#pragma once

class ScriptBinderQueryTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderQueryTemplate::~ScriptBinderQueryTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(unsigned int);
    ScriptBinderQueryTemplate(void);
};
