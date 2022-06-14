#pragma once

template <typename T>
void Vector<T>::copyFrom ( T const* A, Rank lo, Rank hi) {    //以数组区间A[lo, hi)为蓝本进行复制
    _elem = new T[ _capacity = 2 * (hi - lo) ];             //分配空间s
    for( _size = 0; lo < hi; _size++, lo++)
        _elem[ _size ] = A[ lo ];
}