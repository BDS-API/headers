#pragma once

#include "../ScriptObjectHandle.h"
#include "ScriptObjectBinder.h"
#include "ScriptBinderTemplate.h"
#include <string>


class ScriptBinderComponentTemplate : ScriptBinderTemplate {

public:
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ~ScriptBinderComponentTemplate();
    virtual std::string getTemplateIdentifier()const;
    void build(std::string const&, ScriptApi::ScriptObjectHandle &&);
    ScriptBinderComponentTemplate();
};
