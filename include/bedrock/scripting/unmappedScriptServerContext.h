#pragma once



class ScriptServerContext {

public:

    ScriptServerContext();
    bool isValid()const;
    void reset();
    void validate();
    void getLevel();
    void getMinecraft();
    void getRegistry();
    void getPacketSender();
};
