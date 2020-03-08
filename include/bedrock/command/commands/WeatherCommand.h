#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class WeatherCommand : Command {

public:
    virtual WeatherCommand::~WeatherCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    WeatherCommand(void);
};
