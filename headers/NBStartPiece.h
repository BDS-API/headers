#pragma once

class NBStartPiece : NBBridgeCrossing {

public:
    virtual ~NBStartPiece();
    virtual void getType(void)const;

    void NBStartPiece(void);
    void NBStartPiece(Random &, int, int);
};
