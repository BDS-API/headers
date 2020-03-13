#pragma once

#include <string>
#include "CommandFlag.h"


class Command {

public:
    static std::string WILDCARD_TOKEN;

    ~Command(); // _ZN7CommandD2Ev
    Command(); // _ZN7CommandC2Ev
    std::string getCommandName()const; // _ZNK7Command14getCommandNameB5cxx11Ev
    bool hasFlag(CommandFlag)const; // _ZNK7Command7hasFlagE11CommandFlag
    void getRegistry()const; // _ZNK7Command11getRegistryEv
    void run(CommandOrigin const&, CommandOutput &)const; // _ZNK7Command3runERK13CommandOriginR13CommandOutput
    void sendTelemetry(CommandOrigin const&, CommandOutput const&)const; // _ZNK7Command13sendTelemetryERK13CommandOriginRK13CommandOutput
    void getPlayerFromOrigin(CommandOrigin const&); // _ZN7Command19getPlayerFromOriginERK13CommandOrigin
    void shouldSendTelemetry(CommandOrigin const&)const; // _ZNK7Command19shouldSendTelemetryERK13CommandOrigin
    void validData(int, unsigned short &, CommandOutput &); // _ZN7Command9validDataEiRtR13CommandOutput
    void validRange(int, int, int, CommandOutput &); // _ZN7Command10validRangeEiiiR13CommandOutput
    bool isWildcard(CommandSelectorBase const&); // _ZN7Command10isWildcardERK19CommandSelectorBase
    bool isTemplateLockedAction(CommandOrigin const&); // _ZN7Command22isTemplateLockedActionERK13CommandOrigin
};
