#pragma once



class PeekComponent {

public:
    void setHadTarget(bool);
    PeekComponent();
    PeekComponent(PeekComponent &&);
    void getDuration();
    void getHadTarget()const;
};
