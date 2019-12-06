#pragma once

class ScriptBinderLevelTickingAreaTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderLevelTickingAreaTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(ITickingArea const&);
    void ScriptBinderLevelTickingAreaTemplate(void);
};
