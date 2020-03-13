#pragma once

#include <string>
#include <functional>


class ActorInteraction {

public:
    ActorInteraction(bool); // _ZN16ActorInteractionC2Eb
    void interact(); // _ZN16ActorInteraction8interactEv
    void setInteractText(std::string const&); // _ZN16ActorInteraction15setInteractTextERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getInteractText()const; // _ZNK16ActorInteraction15getInteractTextB5cxx11Ev
    void capture(std::function<void (void)>); // _ZN16ActorInteraction7captureESt8functionIFvvEE
    void shouldCapture()const; // _ZNK16ActorInteraction13shouldCaptureEv
    ~ActorInteraction(); // _ZN16ActorInteractionD2Ev
};
