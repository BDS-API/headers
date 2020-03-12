#pragma once

#include "Option.h"
#include <functional>


class OptionObserver {

public:
    OptionObserver(OptionObserver &&);
//  OptionObserver(void *, std::function<void (Option *)>, std::function<void (Option *, InputMode)>); //TODO: incomplete function definition
    OptionObserver(void *, std::function<void (Option *)>);
//  OptionObserver(void *, std::function<void (Option *, InputMode)>); //TODO: incomplete function definition
    ~OptionObserver();
};
