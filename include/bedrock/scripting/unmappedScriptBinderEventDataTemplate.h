#pragma once

#include "../ScriptObjectHandle"


class ScriptBinderEventDataTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderEventDataTemplate::~ScriptBinderEventDataTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(std::string const&, ScriptApi::ScriptObjectHandle &&);
    ScriptBinderEventDataTemplate(void);
};
