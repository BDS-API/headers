#pragma once

#include "../bedrock/IMinecraftApp.h"
#include "UriListener.h"
#include "Response.h"


namespace Automation {

    class AutomationClient : UriListener {

    public:
        ~AutomationClient();
//      virtual void onUri(ActivationUri const&); //TODO: incomplete function definition
        void setServerRetryTime(float);
        AutomationClient(IMinecraftApp &);
        void send(Automation::Response const&);
        void tick();
//      void getSessionForCommand(Automation::CommandOrigin const&); //TODO: incomplete function definition
        void setMaxQueueSize(unsigned long);
        bool isReady();
        void setRequireEncryption(bool);
        bool isReadyForInGameCommands();
        void createSession();
        void getDefaultSession();
    };
}
