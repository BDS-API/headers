#pragma once

#include "../ScriptObjectHandle.h"
#include "ScriptObjectBinder.h"
#include "ScriptBinderTemplate.h"
#include <string>


class ScriptBinderEventDataTemplate : ScriptBinderTemplate {

public:
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ~ScriptBinderEventDataTemplate();
    virtual std::string getTemplateIdentifier()const;
    void build(std::string const&, ScriptApi::ScriptObjectHandle &&);
    ScriptBinderEventDataTemplate();
};
