#pragma once

#include "../Command.h"


class WeatherCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~WeatherCommand();
    WeatherCommand();
    void setup(CommandRegistry &);
};
