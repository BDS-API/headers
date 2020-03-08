#pragma once



class EntityOptionalOwnerRef {

public:

    EntityOptionalOwnerRef(void);
    void setOwnedRef(OwnerPtrT<EntityRefTraits> &&);
    void setWeakRef(WeakRefT<EntityRefTraits> const&);
    void setWeakRef(WeakRefT<EntityRefTraits> &&);
    void tryGet()const;
    bool isSet()const;
    bool isOwned()const;
    bool isWeak()const;
};
