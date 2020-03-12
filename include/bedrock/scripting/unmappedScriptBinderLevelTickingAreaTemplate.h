#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderLevelTickingAreaTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderLevelTickingAreaTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ScriptBinderLevelTickingAreaTemplate();
    void build(ITickingArea const&);
};
