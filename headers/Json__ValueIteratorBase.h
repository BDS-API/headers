#pragma once

class Json::ValueIteratorBase {

public:

    void ValueIteratorBase(void);
    void ValueIteratorBase(Json::ValueIteratorBase const&);
    void ValueIteratorBase(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&);
    void deref(void)const;
    void increment(void);
    void decrement(void);
    void computeDistance(Json::ValueIteratorBase const&)const;
    bool isEqual(Json::ValueIteratorBase const&)const;
    void copy(Json::ValueIteratorBase const&);
    void key(void)const;
    void index(void)const;
    void memberName(void)const;
};
