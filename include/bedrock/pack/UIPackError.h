#pragma once

class UIPackError : PackError {

public:
    virtual UIPackError::~UIPackError();
    virtual void getLocErrorMessageMap[abi:cxx11](void)const;
    virtual void getEventErrorMessageMap[abi:cxx11](void)const;

    UIPackError(void);
    UIPackError(UIPackErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
