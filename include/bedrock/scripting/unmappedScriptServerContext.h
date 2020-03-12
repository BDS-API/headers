#pragma once



class ScriptServerContext {

public:
    void getLevel();
    void getRegistry();
    bool isValid()const;
    ScriptServerContext();
    void getPacketSender();
    void getMinecraft();
    void validate();
    void reset();
};
