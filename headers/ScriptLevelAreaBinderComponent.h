#pragma once

class ScriptLevelAreaBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ~ScriptLevelAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptLevelAreaBinderComponent(void);
    void ScriptLevelAreaBinderComponent(mce::UUID const&);
    void ScriptLevelAreaBinderComponent(ITickingArea const&);
    void getIdentifier(void)const;
};
