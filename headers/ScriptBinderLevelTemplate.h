#pragma once

class ScriptBinderLevelTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderLevelTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, unsigned int);
    void ScriptBinderLevelTemplate(void);
};
