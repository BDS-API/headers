#pragma once



class EntityOptionalOwnerRef {

public:
    ~EntityOptionalOwnerRef(); // _ZN22EntityOptionalOwnerRefD2Ev
    EntityOptionalOwnerRef(); // _ZN22EntityOptionalOwnerRefC2Ev
//  void setOwnedRef(OwnerPtrT<EntityRefTraits> &&); //TODO: incomplete function definition // _ZN22EntityOptionalOwnerRef11setOwnedRefEO9OwnerPtrTI15EntityRefTraitsE
//  void setWeakRef(WeakRefT<EntityRefTraits> const&); //TODO: incomplete function definition // _ZN22EntityOptionalOwnerRef10setWeakRefERK8WeakRefTI15EntityRefTraitsE
//  void setWeakRef(WeakRefT<EntityRefTraits> &&); //TODO: incomplete function definition // _ZN22EntityOptionalOwnerRef10setWeakRefEO8WeakRefTI15EntityRefTraitsE
    void tryGet()const; // _ZNK22EntityOptionalOwnerRef6tryGetEv
    bool isSet()const; // _ZNK22EntityOptionalOwnerRef5isSetEv
    bool isOwned()const; // _ZNK22EntityOptionalOwnerRef7isOwnedEv
    bool isWeak()const; // _ZNK22EntityOptionalOwnerRef6isWeakEv
};
