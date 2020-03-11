#pragma once

#include "./ScriptBinderTemplate.h"
#include "./ScriptObjectBinder.h"
#include <string>


class ScriptBinderQueryTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderQueryTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(unsigned int);
    ScriptBinderQueryTemplate();
};
