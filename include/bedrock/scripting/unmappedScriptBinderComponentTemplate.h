#pragma once

#include "../ScriptObjectHandle"


class ScriptBinderComponentTemplate : ScriptBinderTemplate {

public:
    ScriptBinderComponentTemplate::~ScriptBinderComponentTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(std::string const&, ScriptApi::ScriptObjectHandle &&);
    ScriptBinderComponentTemplate(void);
};
