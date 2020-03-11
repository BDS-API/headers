#pragma once

#include <functional>
#include "./Option.h"
#include "./OptionObserver.h"


class OptionObserver {

public:

    ~OptionObserver();
//  OptionObserver(void *, std::function<void (Option *)>); //TODO: incomplete function definition
    OptionObserver(OptionObserver &&);
//  OptionObserver(void *, std::function<void (Option *, InputMode)>); //TODO: incomplete function definition
//  OptionObserver(void *, std::function<void (Option *)>, std::function<void (Option *, InputMode)>); //TODO: incomplete function definition
};
