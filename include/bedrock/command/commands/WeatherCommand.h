#pragma once

#include "../Command.h"


class WeatherCommand : Command {

public:
    ~WeatherCommand(); // _ZN14WeatherCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK14WeatherCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN14WeatherCommand5setupER15CommandRegistry
    WeatherCommand(); // _ZN14WeatherCommandC2Ev
};
