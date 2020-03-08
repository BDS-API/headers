#pragma once

#include "../bedrock/IMinecraftApp"


using namespace Automation;

class AutomationClient : UriListener {

public:
    virtual Automation::AutomationClient::~AutomationClient()
    virtual void onUri(ActivationUri const&);

    AutomationClient(IMinecraftApp &);
    void getDefaultSession();
    void getSessionForCommand(Automation::CommandOrigin const&);
    void createSession();
    bool isReady();
    void send(Automation::Response const&);
    void tick();
    void setMaxQueueSize(unsigned long);
    void setRequireEncryption(bool);
    void setServerRetryTime(float);
    bool isReadyForInGameCommands();
};
