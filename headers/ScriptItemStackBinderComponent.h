#pragma once

class ScriptItemStackBinderComponent : ScriptBinderComponent {

public:
    static long ScriptItemStackBinderComponent::TAG[abi:cxx11];
    static long ScriptItemStackBinderComponent::COUNT[abi:cxx11];
    static long ScriptItemStackBinderComponent::ITEM[abi:cxx11];
    static long ScriptItemStackBinderComponent::UNDEFINED[abi:cxx11];

    virtual ~ScriptItemStackBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptItemStackBinderComponent(void);
    void ScriptItemStackBinderComponent(entt::Registry<unsigned int> &, ItemInstance const&);
    void getIdentifier(void)const;
};
