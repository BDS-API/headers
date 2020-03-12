#pragma once



class EntityOptionalOwnerRef {

public:
//  void setWeakRef(WeakRefT<EntityRefTraits> const&); //TODO: incomplete function definition
    bool isOwned()const;
    EntityOptionalOwnerRef();
    bool isWeak()const;
    void tryGet()const;
    bool isSet()const;
    ~EntityOptionalOwnerRef();
//  void setWeakRef(WeakRefT<EntityRefTraits> &&); //TODO: incomplete function definition
//  void setOwnedRef(OwnerPtrT<EntityRefTraits> &&); //TODO: incomplete function definition
};
