#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class WeatherCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~WeatherCommand();
    void setup(CommandRegistry &);
    WeatherCommand();
};
