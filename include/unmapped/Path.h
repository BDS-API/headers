#pragma once

#include "../bedrock/actor/Actor.h"
#include "PathfinderNode.h"
#include <vector>
#include "../bedrock/util/Vec3.h"


class Path {

public:
    class Node;

    void getIndex()const;
    void getLastPos()const;
    void next();
    void makeCopy()const;
//  void buildFromNodes(std::vector<Path::Node> &&, PathCompletionType); //TODO: incomplete function definition
    void currentPos(Actor const*)const;
    ~Path();
    void getBlockPos(Actor const*, unsigned long)const;
    void getNodeType(unsigned long)const;
    void sameAs(Path *)const;
    void getNodePos(unsigned long)const;
    void getEndPos()const;
    void setIndex(unsigned long);
    bool endsInXZ(Vec3 const&);
    void currentPos()const;
    Path();
    void getPos(Actor const*, unsigned long)const;
    bool isDone();
    void getCompletionType()const;
    bool isValidIndex(unsigned long)const;
    bool isValid()const;
    Path(Path const&);
    void setSize(unsigned long);
    void getSize()const;
    class Node {

    public:
        void getType()const;
        Node(Path::Node const&);
        Node();
        void set(PathfinderNode const&);
    };
};
