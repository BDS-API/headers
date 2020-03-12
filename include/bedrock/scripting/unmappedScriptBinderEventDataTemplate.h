#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderEventDataTemplate : ScriptBinderTemplate {

public:
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ~ScriptBinderEventDataTemplate();
    ScriptBinderEventDataTemplate();
    void build(std::string const&, ScriptApi::ScriptObjectHandle &&);
};
