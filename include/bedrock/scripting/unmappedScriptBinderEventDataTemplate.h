#pragma once

#include "./ScriptBinderTemplate.h"
#include "../ScriptObjectHandle.h"
#include "./ScriptObjectBinder.h"
#include <string>


class ScriptBinderEventDataTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderEventDataTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(std::string const&, ScriptApi::ScriptObjectHandle &&);
    ScriptBinderEventDataTemplate();
};
