#pragma once



class PeekComponent {

public:
    void getDuration();
    void getHadTarget()const;
    PeekComponent();
    PeekComponent(PeekComponent &&);
    void setHadTarget(bool);
};
