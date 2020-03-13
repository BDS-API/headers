#pragma once



class ScriptServerContext {

public:
    ScriptServerContext(); // _ZN19ScriptServerContextC2Ev
    bool isValid()const; // _ZNK19ScriptServerContext7isValidEv
    void reset(); // _ZN19ScriptServerContext5resetEv
    void validate(); // _ZN19ScriptServerContext8validateEv
    void getLevel(); // _ZN19ScriptServerContext8getLevelEv
    void getMinecraft(); // _ZN19ScriptServerContext12getMinecraftEv
    void getRegistry(); // _ZN19ScriptServerContext11getRegistryEv
    void getPacketSender(); // _ZN19ScriptServerContext15getPacketSenderEv
};
