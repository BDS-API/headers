#pragma once

#include "ScriptObjectBinder.h"
#include "ScriptBinderTemplate.h"


class ScriptBinderQueryTemplate : ScriptBinderTemplate {

public:
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ~ScriptBinderQueryTemplate();
    virtual std::string getTemplateIdentifier()const;
    void build(unsigned int);
    ScriptBinderQueryTemplate();
};
