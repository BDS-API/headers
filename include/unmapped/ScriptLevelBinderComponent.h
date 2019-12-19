#pragma once

class ScriptLevelBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ScriptLevelBinderComponent::~ScriptLevelBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptLevelBinderComponent(void);
    ScriptLevelBinderComponent(unsigned int);
    void getIdentifier(void)const;
};
