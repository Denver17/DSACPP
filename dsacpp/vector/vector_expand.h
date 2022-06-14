#pragma once

template <typename T> void Vector<T>::expand() {
    if( _size < _capacity ) return ;    //空间未满, 无需扩容
    if( _capacity < DEFAULT_CAPACITY )  _capacity = DEFAULT_CAPACITY;   //容量不能小于默认容量
    T* oldElem = _elem;     _elem = new T[_capacity <<= 1];       //容量加倍
    for(int i = 0; i < _size; i++)  _elem[i] = oldElem[i];
    delete [] oldElem;
}