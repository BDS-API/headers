#pragma once

class ScriptEventDataBinderComponent : ScriptBinderComponent {

public:
    static long ScriptEventDataBinderComponent::TAG[abi:cxx11];

    virtual ~ScriptEventDataBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptEventDataBinderComponent(void);
    void ScriptEventDataBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData(void)const;
};
