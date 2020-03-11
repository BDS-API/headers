#pragma once

#include "./ScriptBinderTemplate.h"
#include "../../level/tickingarea/ITickingArea.h"
#include "./ScriptObjectBinder.h"
#include <string>


class ScriptBinderLevelTickingAreaTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderLevelTickingAreaTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(ITickingArea const&);
    ScriptBinderLevelTickingAreaTemplate();
};
