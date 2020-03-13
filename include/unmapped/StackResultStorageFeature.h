#pragma once



class StackResultStorageFeature {

public:
    StackResultStorageFeature(WeakStorageFeature const&); // _ZN25StackResultStorageFeatureC2ERK18WeakStorageFeature
    StackResultStorageFeature(StackResultStorageFeature &&); // _ZN25StackResultStorageFeatureC2EOS_
    void _hasValue()const; // _ZNK25StackResultStorageFeature9_hasValueEv
    void _getStackRef()const; // _ZNK25StackResultStorageFeature12_getStackRefEv
};
