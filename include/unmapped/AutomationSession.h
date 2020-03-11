#pragma once

#include <string>


namespace Automation {

class AutomationSession {

public:

    void connect(std::string const&);
    bool isReady();
    bool isConnecting();
};

}