#pragma once

#include <string>


namespace Automation {

    namespace AutomationSession {

        bool isReady();
        void connect(std::string const&);
        bool isConnecting();
    };
}
