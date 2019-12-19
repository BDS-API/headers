#pragma once

class ScriptQueryBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ~ScriptQueryBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptQueryBinderComponent(void);
    void ScriptQueryBinderComponent(unsigned int);
    void getIdentifier(void)const;
};
