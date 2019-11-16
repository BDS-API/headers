#pragma once

class WeatherCommand : Command {

    virtual ~WeatherCommand();
    virtual ~WeatherCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
