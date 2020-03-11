#pragma once

#include "../bedrock/util/Vec3.h"
#include "./Node.h"
#include <memory>
#include "../bedrock/actor/Actor.h"
#include <vector>
#include "./Path.h"


class Path {

public:

    Path(Path const&);
    Path();
    ~Path();
//  void buildFromNodes(std::vector<Path::Node, std::allocator<Path::Node>> &&, PathCompletionType); //TODO: incomplete function definition
    void next();
    bool isDone();
    bool isValid()const;
    bool isValidIndex(unsigned long)const;
    void getSize()const;
    void setSize(unsigned long);
    void getIndex()const;
    void setIndex(unsigned long);
    void getPos(Actor const*, unsigned long)const;
    void getBlockPos(Actor const*, unsigned long)const;
    void currentPos(Actor const*)const;
    void getCompletionType()const;
    void currentPos()const;
    void getNodePos(unsigned long)const;
    void getNodeType(unsigned long)const;
    void getEndPos()const;
    void getLastPos()const;
    void sameAs(Path *)const;
    bool endsInXZ(Vec3 const&);
    void makeCopy()const;
};
