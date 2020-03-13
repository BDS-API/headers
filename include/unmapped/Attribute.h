#pragma once



class Attribute {

public:
    ~Attribute(); // _ZN9AttributeD2Ev
//  Attribute(HashedString const&, RedefinitionMode, bool); //TODO: incomplete function definition // _ZN9AttributeC2ERK12HashedString16RedefinitionModeb
    void getName()const; // _ZNK9Attribute7getNameEv
    void getIDValue()const; // _ZNK9Attribute10getIDValueEv
    bool isClientSyncable()const; // _ZNK9Attribute16isClientSyncableEv
    void getRedefinitionMode()const; // _ZNK9Attribute19getRedefinitionModeEv
    void getByName(HashedString const&); // _ZN9Attribute9getByNameERK12HashedString
};
