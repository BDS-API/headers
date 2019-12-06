#pragma once

class Attribute {

public:

    void Attribute(HashedString const&, RedefinitionMode, bool);
    void getName(void)const;
    void getIDValue(void)const;
    bool isClientSyncable(void)const;
    void getRedefinitionMode(void)const;
    void getByName(HashedString const&);
};
