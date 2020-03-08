#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/util/Vec3"


class Path {

public:

    Path(Path const&);
    Path(void);
    void buildFromNodes(std::vector<Path::Node, std::allocator<Path::Node>> &&, PathCompletionType);
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
    void sameAs(Path*)const;
    bool endsInXZ(Vec3 const&);
    void makeCopy()const;
};
