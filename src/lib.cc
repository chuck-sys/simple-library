#include "inc.h"

namespace lib {
    template<typename T>
    T abs (T v) {
        return v < 0? -v: v;
    }
}
