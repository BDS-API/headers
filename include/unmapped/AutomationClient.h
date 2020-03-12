#pragma once

#include "UriListener.h"


namespace Automation {

    class AutomationClient : UriListener {

    public:
//      virtual void onUri(ActivationUri const&); //TODO: incomplete function definition
        ~AutomationClient();
        void tick();
        void setRequireEncryption(bool);
        bool isReady();
//      void getSessionForCommand(Automation::CommandOrigin const&); //TODO: incomplete function definition
        bool isReadyForInGameCommands();
        void setMaxQueueSize(unsigned long);
        void getDefaultSession();
        AutomationClient(IMinecraftApp &);
        void createSession();
        void setServerRetryTime(float);
        void send(Automation::Response const&);
    };
}
