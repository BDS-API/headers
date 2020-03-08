#pragma once



class EntityOptionalOwnerRef {

public:

    EntityOptionalOwnerRef(void);
    void setOwnedRef(OwnerPtrT<EntityRefTraits> &&);
    void setWeakRef(WeakRefT<EntityRefTraits> const&);
    void setWeakRef(WeakRefT<EntityRefTraits> &&);
    void tryGet(void)const;
    bool isSet(void)const;
    bool isOwned(void)const;
    bool isWeak(void)const;
};
