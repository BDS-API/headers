#pragma once

#include "ScriptObjectBinder.h"
#include "ScriptBinderTemplate.h"
#include "../../level/tickingarea/ITickingArea.h"


class ScriptBinderLevelTickingAreaTemplate : ScriptBinderTemplate {

public:
    virtual std::string getTemplateIdentifier()const;
    ~ScriptBinderLevelTickingAreaTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;
    void build(ITickingArea const&);
    ScriptBinderLevelTickingAreaTemplate();
};
