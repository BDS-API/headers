#pragma once



class EntityOptionalOwnerRef {

public:
//  void setWeakRef(WeakRefT<EntityRefTraits> &&); //TODO: incomplete function definition
    void tryGet()const;
    ~EntityOptionalOwnerRef();
    bool isSet()const;
    bool isOwned()const;
    EntityOptionalOwnerRef();
//  void setOwnedRef(OwnerPtrT<EntityRefTraits> &&); //TODO: incomplete function definition
    bool isWeak()const;
//  void setWeakRef(WeakRefT<EntityRefTraits> const&); //TODO: incomplete function definition
};
