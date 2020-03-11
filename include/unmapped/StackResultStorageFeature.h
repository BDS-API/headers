#pragma once

#include "./WeakStorageFeature.h"
#include "./StackResultStorageFeature.h"


class StackResultStorageFeature {

public:

    StackResultStorageFeature(WeakStorageFeature const&);
    StackResultStorageFeature(StackResultStorageFeature &&);
    void _hasValue()const;
    void _getStackRef()const;
};
