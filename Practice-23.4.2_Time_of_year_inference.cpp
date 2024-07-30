#include <iostream>

//#define SPRING
//#define SUMMER
//#define AUTUMN
#define WINTER

#ifdef SPRING
int main () {
    std::cout << "SPRING";
}
#endif

#ifdef SUMMER
int main () {
    std::cout << "SUMMER";
}
#endif

#ifdef AUTUMN
int main () {
    std::cout << "AUTUMN";
}
#endif

#ifdef WINTER
int main () {
    std::cout << "WINTER";
}
#endif
