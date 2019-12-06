#pragma once

class WeatherCommand : Command {

public:
    virtual ~WeatherCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void WeatherCommand(void);
};
