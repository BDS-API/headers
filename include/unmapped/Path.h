#pragma once

#include "../bedrock/actor/Actor"


class Path {

public:

    Path(Path const&);
    Path(void);
    void buildFromNodes(std::vector<Path::Node, std::allocator<Path::Node>> &&, PathCompletionType);
    void next(void);
    bool isDone(void);
    bool isValid(void)const;
    bool isValidIndex(unsigned long)const;
    void getSize(void)const;
    void setSize(unsigned long);
    void getIndex(void)const;
    void setIndex(unsigned long);
    void getPos(Actor const*, unsigned long)const;
    void getBlockPos(Actor const*, unsigned long)const;
    void currentPos(Actor const*)const;
    void getCompletionType(void)const;
    void currentPos(void)const;
    void getNodePos(unsigned long)const;
    void getNodeType(unsigned long)const;
    void getEndPos(void)const;
    void getLastPos(void)const;
    void sameAs(Path*)const;
    bool endsInXZ(Vec3 const&);
    void makeCopy(void)const;
};
