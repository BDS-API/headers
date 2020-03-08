#pragma once



class OptionObserver {

public:

    OptionObserver(void *, std::function<void ()(Option *)>);
    OptionObserver(OptionObserver&&);
    OptionObserver(void *, std::function<void ()(Option *, InputMode)>);
    OptionObserver(void *, std::function<void ()(Option *)>, std::function<void ()(Option *, InputMode)>);
};
