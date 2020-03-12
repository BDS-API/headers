#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderQueryTemplate : ScriptBinderTemplate {

public:
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ~ScriptBinderQueryTemplate();
    ScriptBinderQueryTemplate();
    void build(unsigned int);
};
