#pragma once

class ScriptBinderActorTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderActorTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, Actor const&);
    void ScriptBinderActorTemplate(void);
};
