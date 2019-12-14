#pragma once

class Automation::AutomationSession {

public:

    void connect(std::string const&);
    bool isReady(void);
    bool isConnecting(void);
};
