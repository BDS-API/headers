#pragma once



class Attribute {

public:
    ~Attribute();
    bool isClientSyncable()const;
    void getName()const;
    void getRedefinitionMode()const;
    void getByName(HashedString const&);
    void getIDValue()const;
//  Attribute(HashedString const&, RedefinitionMode, bool); //TODO: incomplete function definition
};
