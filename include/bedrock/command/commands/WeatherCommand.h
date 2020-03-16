#pragma once

#include "../Command.h"


class WeatherCommand : public Command {

public:
    virtual ~WeatherCommand(); // _ZN14WeatherCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK14WeatherCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN14WeatherCommand5setupER15CommandRegistry
    WeatherCommand(); // _ZN14WeatherCommandC2Ev
};
