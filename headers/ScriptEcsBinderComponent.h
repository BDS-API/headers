#pragma once

class ScriptEcsBinderComponent : ScriptBinderComponent {

public:
    static long ScriptEcsBinderComponent::TAG[abi:cxx11];

    virtual ~ScriptEcsBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptEcsBinderComponent(void);
    void ScriptEcsBinderComponent(unsigned int);
    void ScriptEcsBinderComponent(entt::Registry<unsigned int> &, Actor const&);
    void ScriptEcsBinderComponent(entt::Registry<unsigned int> &, ItemActor const&);
    void getIdentifier(void)const;
};
