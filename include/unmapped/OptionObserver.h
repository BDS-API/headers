#pragma once

#include <functional>


class OptionObserver {

public:
    OptionObserver(void *, std::function<void (Option *, InputMode)>);
    ~OptionObserver();
    OptionObserver(void *, std::function<void (Option *)>, std::function<void (Option *, InputMode)>);
    OptionObserver(OptionObserver &&);
    OptionObserver(void *, std::function<void (Option *)>);
};
