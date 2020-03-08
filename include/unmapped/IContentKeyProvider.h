#pragma once



class IContentKeyProvider {

public:
    IContentKeyProvider::~IContentKeyProvider()
    virtual void getAlternateContentKey(ContentIdentity const&)const;

    IContentKeyProvider(void);
};
