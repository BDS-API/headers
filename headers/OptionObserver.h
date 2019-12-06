#pragma once

class OptionObserver {

public:

    void OptionObserver(void *, std::function<void ()(Option *)>);
    void OptionObserver(OptionObserver&&);
    void OptionObserver(void *, std::function<void ()(Option *, InputMode)>);
    void OptionObserver(void *, std::function<void ()(Option *)>, std::function<void ()(Option *, InputMode)>);
};
