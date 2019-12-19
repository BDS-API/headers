#pragma once

class ContentIdentity {

public:
    static long EMPTY;


    ContentIdentity(mce::UUID const&);
    void _setValidFlag(void);
    ContentIdentity(void);
    ContentIdentity(ContentIdentity const&);
    ContentIdentity(ContentIdentity&&);
    void getAsUUID(void)const;
    void setUUID(mce::UUID const&);
    bool isValid(void)const;
    void fromString(std::string const&);
};
