#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderComponentTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderComponentTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ScriptBinderComponentTemplate();
    void build(std::string const&, ScriptApi::ScriptObjectHandle &&);
};
