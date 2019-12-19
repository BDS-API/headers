#pragma once

class ScriptServerContext {

public:

    ScriptServerContext(void);
    bool isValid(void)const;
    void reset(void);
    void validate(void);
    void getLevel(void);
    void getMinecraft(void);
    void getRegistry(void);
    void getPacketSender(void);
};
