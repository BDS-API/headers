#pragma once

class ScriptBinderItemStackTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderItemStackTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(entt::Registry<unsigned int> &, ItemInstance const&);
    void ScriptBinderItemStackTemplate(void);
};
