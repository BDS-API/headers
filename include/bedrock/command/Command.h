#pragma once

#include <string>
#include "CommandFlag.h"


class Command {

public:
    static std::string WILDCARD_TOKEN;

    ~Command();
    Command();
    void validRange(int, int, int, CommandOutput &);
    std::string getCommandName()const;
    void getPlayerFromOrigin(CommandOrigin const&);
    void shouldSendTelemetry(CommandOrigin const&)const;
    void getRegistry()const;
    bool isTemplateLockedAction(CommandOrigin const&);
    bool isWildcard(CommandSelectorBase const&);
    void sendTelemetry(CommandOrigin const&, CommandOutput const&)const;
    void run(CommandOrigin const&, CommandOutput &)const;
    void validData(int, unsigned short &, CommandOutput &);
    bool hasFlag(CommandFlag)const;
};
