#pragma once

#include "MessagingCommand.h"


class SayCommand : public MessagingCommand {

public:
    virtual ~SayCommand(); // _ZN10SayCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK10SayCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN10SayCommand5setupER15CommandRegistry
    SayCommand(); // _ZN10SayCommandC2Ev
};
