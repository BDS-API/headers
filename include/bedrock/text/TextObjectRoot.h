#pragma once

#include <string>
#include <memory>
#include "ITextObject.h"


class TextObjectRoot : ITextObject {

public:
    ~TextObjectRoot(); // _ZN14TextObjectRootD2Ev
    virtual std::string asString()const; // _ZNK14TextObjectRoot8asStringB5cxx11Ev
    virtual bool asJsonValue()const; // _ZNK14TextObjectRoot11asJsonValueEv
    TextObjectRoot(); // _ZN14TextObjectRootC2Ev
    TextObjectRoot(TextObjectRoot &&); // _ZN14TextObjectRootC2EOS_
    void addChild(std::unique_ptr<ITextObject>); // _ZN14TextObjectRoot8addChildESt10unique_ptrI11ITextObjectSt14default_deleteIS1_EE
    void clear(); // _ZN14TextObjectRoot5clearEv
    bool isEmpty()const; // _ZNK14TextObjectRoot7isEmptyEv
};
