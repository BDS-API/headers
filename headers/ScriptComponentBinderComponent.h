#pragma once

class ScriptComponentBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ~ScriptComponentBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptComponentBinderComponent(void);
    void ScriptComponentBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData(void)const;
};
