#pragma once

class ScriptBinderItemActorTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderItemActorTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, ItemActor const&);
    void ScriptBinderItemActorTemplate(void);
};
