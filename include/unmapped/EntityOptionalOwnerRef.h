#pragma once



class EntityOptionalOwnerRef {

public:

    ~EntityOptionalOwnerRef();
    EntityOptionalOwnerRef();
//  void setOwnedRef(OwnerPtrT<EntityRefTraits> &&); //TODO: incomplete function definition
//  void setWeakRef(WeakRefT<EntityRefTraits> const&); //TODO: incomplete function definition
//  void setWeakRef(WeakRefT<EntityRefTraits> &&); //TODO: incomplete function definition
    void tryGet()const;
    bool isSet()const;
    bool isOwned()const;
    bool isWeak()const;
};
