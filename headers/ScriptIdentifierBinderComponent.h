#pragma once

class ScriptIdentifierBinderComponent : ScriptBinderComponent {

public:
    static long ScriptIdentifierBinderComponent::TAG[abi:cxx11];

    virtual ~ScriptIdentifierBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptIdentifierBinderComponent(void);
    void ScriptIdentifierBinderComponent(std::string const&);
    void ScriptIdentifierBinderComponent(Actor const&);
    void ScriptIdentifierBinderComponent(ItemActor const&);
    void ScriptIdentifierBinderComponent(ItemInstance const&);
    void ScriptIdentifierBinderComponent(Block const&);
};
