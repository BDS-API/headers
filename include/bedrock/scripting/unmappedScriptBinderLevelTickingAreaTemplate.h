#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderLevelTickingAreaTemplate : public ScriptBinderTemplate {

public:
    virtual ~ScriptBinderLevelTickingAreaTemplate(); // _ZN36ScriptBinderLevelTickingAreaTemplateD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getTemplateIdentifier()const; // _ZNK36ScriptBinderLevelTickingAreaTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK36ScriptBinderLevelTickingAreaTemplate13applyTemplateER18ScriptObjectBinder
    void build(ITickingArea const&); // _ZN36ScriptBinderLevelTickingAreaTemplate5buildERK12ITickingArea
    ScriptBinderLevelTickingAreaTemplate(); // _ZN36ScriptBinderLevelTickingAreaTemplateC2Ev
};
