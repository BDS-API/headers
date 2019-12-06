#pragma once

class ITextObject {

public:
    virtual ~ITextObject();

    void ITextObject(void);
    void ITextObject(ITextObject const&);
};
