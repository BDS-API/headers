#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderQueryTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderQueryTemplate(); // _ZN25ScriptBinderQueryTemplateD2Ev
    virtual std::string getTemplateIdentifier()const; // _ZNK25ScriptBinderQueryTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK25ScriptBinderQueryTemplate13applyTemplateER18ScriptObjectBinder
    void build(unsigned int); // _ZN25ScriptBinderQueryTemplate5buildEj
    ScriptBinderQueryTemplate(); // _ZN25ScriptBinderQueryTemplateC2Ev
};
