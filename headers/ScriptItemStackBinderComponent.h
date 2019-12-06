#pragma once

class ScriptItemStackBinderComponent : ScriptBinderComponent {

public:
    virtual ~ScriptItemStackBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptItemStackBinderComponent(void);
    void ScriptItemStackBinderComponent(entt::Registry<unsigned int> &, ItemInstance const&);
    void getIdentifier(void)const;
};
