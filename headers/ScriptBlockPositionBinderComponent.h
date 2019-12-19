#pragma once

class ScriptBlockPositionBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ~ScriptBlockPositionBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptBlockPositionBinderComponent(void);
    void ScriptBlockPositionBinderComponent(BlockPos const&);
    void getPosition(void)const;
};
