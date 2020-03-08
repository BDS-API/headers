#pragma once



class Attribute {

public:

    Attribute(HashedString const&, RedefinitionMode, bool);
    void getName()const;
    void getIDValue()const;
    bool isClientSyncable()const;
    void getRedefinitionMode()const;
    void getByName(HashedString const&);
};
