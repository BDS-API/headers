#pragma once

#include "Value.h"
#include <utility>


namespace Json {

    class ValueIteratorBase {

    public:
        ValueIteratorBase(Json::ValueIteratorBase const&);
//      ValueIteratorBase(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition
        void memberName()const;
        void operator!=(Json::ValueIteratorBase const&)const;
        ValueIteratorBase();
        void computeDistance(Json::ValueIteratorBase const&)const;
        bool isEqual(Json::ValueIteratorBase const&)const;
        void key()const;
        void copy(Json::ValueIteratorBase const&);
        void increment();
        void index()const;
        void decrement();
        void deref()const;
    };
}
