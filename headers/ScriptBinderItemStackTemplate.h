#pragma once

class ScriptBinderItemStackTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderItemStackTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, ItemInstance const&);
    void ScriptBinderItemStackTemplate(void);
};
