#pragma once

#include <string>
#include "CommandSelectorBase.h"
#include "CommandFlag.h"
#include "origin/CommandOrigin.h"
#include "CommandOutput.h"


class Command {

public:
    static std::string WILDCARD_TOKEN;

    ~Command();
    void getPlayerFromOrigin(CommandOrigin const&);
    bool isWildcard(CommandSelectorBase const&);
    Command();
    void sendTelemetry(CommandOrigin const&, CommandOutput const&)const;
    void validData(int, unsigned short &, CommandOutput &);
    void getRegistry()const;
    std::string getCommandName()const;
    void validRange(int, int, int, CommandOutput &);
    bool isTemplateLockedAction(CommandOrigin const&);
    void run(CommandOrigin const&, CommandOutput &)const;
    bool hasFlag(CommandFlag)const;
    void shouldSendTelemetry(CommandOrigin const&)const;
};
