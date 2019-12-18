#pragma once

class UIPackError : PackError {

public:
    virtual ~UIPackError();
    virtual void getLocErrorMessageMap[abi:cxx11](void)const;
    virtual void getEventErrorMessageMap[abi:cxx11](void)const;

    void UIPackError(void);
    void UIPackError(UIPackErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
