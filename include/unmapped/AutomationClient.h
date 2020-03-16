#pragma once

#include "UriListener.h"


namespace Automation {

    class AutomationClient : public UriListener {

    public:
        virtual ~AutomationClient(); // _ZN10Automation16AutomationClientD2Ev
        virtual void __fake_function0(); // fake
        virtual void onUri__incomplete0(long const&); //TODO: incomplete function definition // _ZN10Automation16AutomationClient5onUriERK13ActivationUri
        AutomationClient(IMinecraftApp &); // _ZN10Automation16AutomationClientC2ER13IMinecraftApp
        void getDefaultSession(); // _ZN10Automation16AutomationClient17getDefaultSessionEv
//        void getSessionForCommand(long const&); //TODO: incomplete function definition // _ZN10Automation16AutomationClient20getSessionForCommandERKNS_13CommandOriginE
        void createSession(); // _ZN10Automation16AutomationClient13createSessionEv
        bool isReady(); // _ZN10Automation16AutomationClient7isReadyEv
        void send(Automation::Response const&); // _ZN10Automation16AutomationClient4sendERKNS_8ResponseE
        void tick(); // _ZN10Automation16AutomationClient4tickEv
        void setMaxQueueSize(unsigned long); // _ZN10Automation16AutomationClient15setMaxQueueSizeEm
        void setRequireEncryption(bool); // _ZN10Automation16AutomationClient20setRequireEncryptionEb
        void setServerRetryTime(float); // _ZN10Automation16AutomationClient18setServerRetryTimeEf
        bool isReadyForInGameCommands(); // _ZN10Automation16AutomationClient24isReadyForInGameCommandsEv
    };
}
