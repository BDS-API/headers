#pragma once

#include "./CommandSelectorBase.h"
#include "./CommandFlag.h"
#include "./CommandOutput.h"
#include "orgin/CommandOrigin.h"
#include <string>


class Command {

public:
    static std::string WILDCARD_TOKEN;

    virtual ~Command();

    Command();
    std::string getCommandName()const;
    bool hasFlag(CommandFlag)const;
    void getRegistry()const;
    void run(CommandOrigin const&, CommandOutput &)const;
    void sendTelemetry(CommandOrigin const&, CommandOutput const&)const;
    void getPlayerFromOrigin(CommandOrigin const&);
    void shouldSendTelemetry(CommandOrigin const&)const;
    void validData(int, unsigned short &, CommandOutput &);
    void validRange(int, int, int, CommandOutput &);
    bool isWildcard(CommandSelectorBase const&);
    bool isTemplateLockedAction(CommandOrigin const&);
};
