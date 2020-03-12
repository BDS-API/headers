#pragma once

#include "WeakStorageFeature.h"


class StackResultStorageFeature {

public:
    StackResultStorageFeature(StackResultStorageFeature &&);
    void _getStackRef()const;
    StackResultStorageFeature(WeakStorageFeature const&);
    void _hasValue()const;
};
