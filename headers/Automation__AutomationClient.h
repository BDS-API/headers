#pragma once

class Automation::AutomationClient : UriListener {

public:
    virtual ~AutomationClient();
    virtual void onUri(ActivationUri const&);

    void AutomationClient(IMinecraftApp &);
    void getDefaultSession(void);
    void getSessionForCommand(Automation::CommandOrigin const&);
    void createSession(void);
    bool isReady(void);
    void send(Automation::Response const&);
    void tick(void);
    void setMaxQueueSize(unsigned long);
    void setRequireEncryption(bool);
    void setServerRetryTime(float);
    bool isReadyForInGameCommands(void);
};
