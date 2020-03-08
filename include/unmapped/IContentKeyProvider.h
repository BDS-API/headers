#pragma once



class IContentKeyProvider {

public:
    virtual IContentKeyProvider::~IContentKeyProvider();
    virtual void getAlternateContentKey[abi:cxx11](ContentIdentity const&)const;

    IContentKeyProvider(void);
};
