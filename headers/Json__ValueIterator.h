#pragma once

class Json::ValueIterator {

public:

    void ValueIterator(void);
    void ValueIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&);
    void ValueIterator(Json::ValueConstIterator const&);
    void ValueIterator(Json::ValueIterator const&);
};
