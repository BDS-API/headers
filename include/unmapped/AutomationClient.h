#pragma once

#include "../bedrock/IMinecraftApp.h"
#include "./UriListener.h"
#include "./Response.h"


namespace Automation {

class AutomationClient : UriListener {

public:
    virtual ~AutomationClient();
//  virtual void onUri(ActivationUri const&); //TODO: incomplete function definition

    AutomationClient(IMinecraftApp &);
    void getDefaultSession();
//  void getSessionForCommand(Automation::CommandOrigin const&); //TODO: incomplete function definition
    void createSession();
    bool isReady();
    void send(Automation::Response const&);
    void tick();
    void setMaxQueueSize(unsigned long);
    void setRequireEncryption(bool);
    void setServerRetryTime(float);
    bool isReadyForInGameCommands();
};

}