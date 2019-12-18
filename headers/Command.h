#pragma once

class Command {

public:
    static long Command::WILDCARD_TOKEN[abi:cxx11];

    virtual ~Command();

    void Command(void);
    bool hasFlag(CommandFlag)const;
    void getRegistry(void)const;
    void run(CommandOrigin const&, CommandOutput &)const;
    void sendTelemetry(CommandOrigin const&, CommandOutput const&)const;
    void getPlayerFromOrigin(CommandOrigin const&);
    void shouldSendTelemetry(CommandOrigin const&)const;
    void validData(int, unsigned short &, CommandOutput &);
    void validRange(int, int, int, CommandOutput &);
    bool isWildcard(CommandSelectorBase const&);
    bool isTemplateLockedAction(CommandOrigin const&);
};
