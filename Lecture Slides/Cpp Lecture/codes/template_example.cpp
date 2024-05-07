template<class T>   // compute minimum of two values
T min(T x, T y) { return x < y ? x : y; }

template<typename T>    // compute square of value
T sqr(T x) { return x * x; }

// swap two values
template<class T>
void swap(T &x, T &y) { T tmp = x; x = y; y = tmp; }

// invoke function/functor multiple times
template<int N = 1, typename F, typename T>

void invoke(F func, const T &value) {
    for (int i = 0; i < N; ++i) { func(value); }
}