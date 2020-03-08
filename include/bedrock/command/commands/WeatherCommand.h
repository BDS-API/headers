#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class WeatherCommand : Command {

public:
    virtual WeatherCommand::~WeatherCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    WeatherCommand(void);
};
