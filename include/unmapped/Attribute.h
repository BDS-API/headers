#pragma once

#include "./HashedString.h"


class Attribute {

public:

    ~Attribute();
//  Attribute(HashedString const&, RedefinitionMode, bool); //TODO: incomplete function definition
    void getName()const;
    void getIDValue()const;
    bool isClientSyncable()const;
    void getRedefinitionMode()const;
    void getByName(HashedString const&);
};
