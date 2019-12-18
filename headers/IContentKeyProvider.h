#pragma once

class IContentKeyProvider {

public:
    virtual ~IContentKeyProvider();
    virtual void getAlternateContentKey[abi:cxx11](ContentIdentity const&)const;

    void IContentKeyProvider(void);
};
