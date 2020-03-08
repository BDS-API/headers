#pragma once



class IContentKeyProvider {

public:
    virtual IContentKeyProvider::~IContentKeyProvider()
    virtual void getAlternateContentKey(ContentIdentity const&)const;

    IContentKeyProvider(void);
};
