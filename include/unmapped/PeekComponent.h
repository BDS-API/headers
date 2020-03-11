#pragma once

#include "./PeekComponent.h"


class PeekComponent {

public:

    PeekComponent(PeekComponent &&);
    void getHadTarget()const;
    void setHadTarget(bool);
    void getDuration();
    PeekComponent();
};
