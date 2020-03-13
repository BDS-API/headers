#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderLevelTickingAreaTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderLevelTickingAreaTemplate(); // _ZN36ScriptBinderLevelTickingAreaTemplateD2Ev
    virtual std::string getTemplateIdentifier()const; // _ZNK36ScriptBinderLevelTickingAreaTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK36ScriptBinderLevelTickingAreaTemplate13applyTemplateER18ScriptObjectBinder
    void build(ITickingArea const&); // _ZN36ScriptBinderLevelTickingAreaTemplate5buildERK12ITickingArea
    ScriptBinderLevelTickingAreaTemplate(); // _ZN36ScriptBinderLevelTickingAreaTemplateC2Ev
};
