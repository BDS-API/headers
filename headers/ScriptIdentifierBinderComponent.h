#pragma once

class ScriptIdentifierBinderComponent : ScriptBinderComponent {

public:
    virtual ~ScriptIdentifierBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptIdentifierBinderComponent(void);
    void ScriptIdentifierBinderComponent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ScriptIdentifierBinderComponent(Actor const&);
    void ScriptIdentifierBinderComponent(ItemActor const&);
    void ScriptIdentifierBinderComponent(ItemInstance const&);
    void ScriptIdentifierBinderComponent(Block const&);
};
