#pragma once



class ScriptServerContext {

public:
    void reset();
    void getLevel();
    bool isValid()const;
    void getPacketSender();
    void validate();
    void getMinecraft();
    void getRegistry();
    ScriptServerContext();
};
