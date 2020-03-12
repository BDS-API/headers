#pragma once

#include "HashedString.h"


class Attribute {

public:
    void getRedefinitionMode()const;
    ~Attribute();
    void getByName(HashedString const&);
    void getName()const;
//  Attribute(HashedString const&, RedefinitionMode, bool); //TODO: incomplete function definition
    void getIDValue()const;
    bool isClientSyncable()const;
};
