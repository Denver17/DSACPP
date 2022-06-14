#pragma once

template <typename T>
Rank Vector<T>::insert( Rank r, T const& e){
    expand();   //若有必要, 则扩容
    for(int i = _size; i > r; i--)  _elem[i] = _elem[i - 1];    //自后向前，后继元素顺次后移一个单元
    _elem[r] = e;   _size++;
    return r;
}
