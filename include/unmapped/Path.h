#pragma once

#include <vector>


class Path {

public:
    class Node;

    Path();
    void next();
    void getPos(Actor const*, unsigned long)const;
    bool isValid()const;
    bool isValidIndex(unsigned long)const;
    void setIndex(unsigned long);
    void currentPos()const;
    void getCompletionType()const;
    void getEndPos()const;
    void getLastPos()const;
    void getSize()const;
    void getNodeType(unsigned long)const;
    void getIndex()const;
    ~Path();
//  void buildFromNodes(std::vector<Path::Node> &&, PathCompletionType); //TODO: incomplete function definition
    void currentPos(Actor const*)const;
    void setSize(unsigned long);
    void getNodePos(unsigned long)const;
    bool isDone();
    void getBlockPos(Actor const*, unsigned long)const;
    void makeCopy()const;
    Path(Path const&);
    bool endsInXZ(Vec3 const&);
    void sameAs(Path *)const;
    class Node {

    public:
        Node();
        Node(Path::Node const&);
        void set(PathfinderNode const&);
        void getType()const;
    };
};
