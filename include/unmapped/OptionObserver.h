#pragma once

#include <functional>


class OptionObserver {

public:
    ~OptionObserver(); // _ZN14OptionObserverD2Ev
    OptionObserver(void *, std::function<void (Option *)>); // _ZN14OptionObserverC2EPvSt8functionIFvP6OptionEE
    OptionObserver(OptionObserver &&); // _ZN14OptionObserverC2EOS_
    OptionObserver(void *, std::function<void (Option *, InputMode)>); // _ZN14OptionObserverC2EPvSt8functionIFvP6Option9InputModeEE
    OptionObserver(void *, std::function<void (Option *)>, std::function<void (Option *, InputMode)>); // _ZN14OptionObserverC2EPvSt8functionIFvP6OptionEES1_IFvS3_9InputModeEE
};
