#pragma once

class UIPackError : PackError {

public:
    virtual ~UIPackError();

    void UIPackError(void);
    void UIPackError(UIPackErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
