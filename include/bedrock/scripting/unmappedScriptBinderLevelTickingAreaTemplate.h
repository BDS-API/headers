#pragma once

#include "../../level/tickingarea/ITickingArea"


class ScriptBinderLevelTickingAreaTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderLevelTickingAreaTemplate::~ScriptBinderLevelTickingAreaTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(ITickingArea const&);
    ScriptBinderLevelTickingAreaTemplate(void);
};
