#pragma once

class ScriptBinderActorTickingAreaTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderActorTickingAreaTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(ITickingArea const&);
    void build(ActorUniqueID const&);
    void ScriptBinderActorTickingAreaTemplate(void);
};
